#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter n : ";
    cin >> x;

    if (x < 0)
        cout << -x;
    else
        cout << x;
    return 0;
}