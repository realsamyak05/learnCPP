#include <iostream>
using namespace std;

class hero
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

    hero sam;

    // sam.health = 70; this would give error because health is private but we can use getter and setter

    cout << "before setting : " << sam.getHealth() << endl;
    cout << "Enter health : ";
    int h;
    cin >> h;
    sam.setHealth(h);

    cout << "after setting : " << sam.getHealth() << endl;
    return 0;
}