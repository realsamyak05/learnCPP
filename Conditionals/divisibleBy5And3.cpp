#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n:" << endl;
    cin >> n;
    if (n % 5 == 0 && n % 3 == 0)
    {
        cout << n << " is divisble by both 5 and 3" << endl;
    }
    else
    {
        cout << n << " is NOT divisible by 5 and 3" << endl;
    }
    return 0;
}