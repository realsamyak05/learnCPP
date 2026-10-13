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

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }
};

int main()
{
    Hero h1;

    h1.setHealth(70);
    h1.setLevel('A');

    cout << "h1 health and level are : " << h1.getHealth() << " and " << h1.getLevel() << endl;

    Hero *h = new Hero;
    (*h).setHealth(90);
    (*h).setLevel('B');
    cout << "h health and level are : " << (*h).getHealth() << " and " << h->getLevel() << endl;
    return 0;
}