#include <bits/stdc++.h>
using namespace std;
class Hero
{
private:
    int health = 10;
    char level = 'B';

public:
    int getHealth()
    {
        return this->health;
    }

    char getLevel()
    {
        return this->level;
    }
};

int main()
{
    Hero sam;
    cout << "Health = " << sam.getHealth() << endl;
    cout << "Level = " << sam.getLevel() << endl;

    return 0;
}
