#include <iostream>
using namespace std;
class Hero
{
public:
    Hero()
    {
        cout << "Constructor called... \n";
    }

    ~Hero()
    {
        cout << "Destructor called... \n";
    }
};

int main()
{
    Hero a;

    Hero *b = new Hero();
    delete b;

    return 0;
}