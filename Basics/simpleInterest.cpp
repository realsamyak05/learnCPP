#include <iostream>
using namespace std;
int main()
{
    float p, t, r, SI;
    cout << "enter principal amount (rs.) : ";
    cin >> p;
    cout << "enter time (years) : ";
    cin >> t;
    cout << "enter interest rate (percent) : ";
    cin >> r;

    SI = p * t * r / 100;
    cout << "Simple Interest = " << SI;
    return 0;
}