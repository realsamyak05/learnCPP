#include <iostream>
using namespace std;

class Hero
{
public:
    int health;
    Hero(int health)
    {
        this->health = health;
        cout << "this -> " << this << endl;
        cout << "health = " << this->health;
    }
};

int main()
{
    Hero ramesh(10);
    return 0;
}