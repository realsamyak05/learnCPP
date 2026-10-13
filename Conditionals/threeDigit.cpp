#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "enter n: " << endl;
    cin >> x;
    if (x > 99 && x <= 999)
    {
        cout << x << " is a three digit number" << endl;
    }
    else
    {
        cout << "Not a three digit number" << endl;
    }
    return 0;
}