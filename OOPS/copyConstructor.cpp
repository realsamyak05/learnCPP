#include <iostream>
using namespace std;

class Hero
{
    int health;
    char level;

public:
    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int health)
    {
        this->health = health;
    }

    void setLevel(char level)
    {
        this->level = level;
    }

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
    Hero suresh(70, 'C');
    suresh.print();

    Hero R(suresh);
    R.print();

    return 0;
}