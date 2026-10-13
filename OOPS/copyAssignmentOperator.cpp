#include <iostream>
using namespace std;

class Hero
{
public:
    int health;
    char level;

    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    void print()
    {
        cout << "Health : " << this->health << endl;
        cout << "Level : " << this->level << endl;
    }
};

int main()
{
    Hero a(10, 'C');
    Hero b(20, 'B');

    a.print();
    b.print();

    a = b;
    a.print();
    b.print();

    return 0;
}