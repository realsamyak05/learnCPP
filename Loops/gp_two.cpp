#include <iostream>
using namespace std;
int main()
{
    int a, n;
    cout << "Enter n : ";
    cin >> n;
    a = 3;
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        a = a * 4;
    }
    return 0;
}