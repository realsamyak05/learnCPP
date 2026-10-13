#include <iostream>
using namespace std;
int main()
{
    int cp, sp;
    cout << "Enter cost price and seliing price: " << endl;
    cin >> cp >> sp;
    if (sp < cp)
    {
        cout << "loss of " << cp - sp;
    }
    if (sp > cp)
    {
        cout << "profit of " << sp - cp;
    }
    if (sp == cp)
    {
        cout << "no profit-loss";
    }
    return 0;
}