#include <iostream>
using namespace std;

class Hero
{
public:
    int health;
    char level;
};

int main()
{

    Hero h1;

    cout << "size = " << sizeof(h1) << endl;
    cout << "Health = " << h1.health;
    return 0;
}