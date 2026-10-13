#include <bits/stdc++.h>
using namespace std;

class Hero
{

public:
    int health;
    char level;
    char *name;
    Hero(Hero &temp)
    {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        this->health = temp.health;
        this->level = temp.level;
    }

    Hero(int health, char level, char name[])
    {
        this->health = health;
        this->level = level;
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }

    void print()
    {
        cout << "Name : " << this->name << endl;
        cout << "Health : " << this->health << endl;
        cout << "Level : " << this->level << endl;
    }
};

int main()
{
    char name[7] = "Samyak";
    Hero S(10, 'C', name);
    S.print();

    Hero R(S);
    R.print();

    S.name[0] = 'F';
    S.print();

    R.print();
    return 0;
}