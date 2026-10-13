#include <iostream>
using namespace std;
int main()
{
    int n, a;
    cout << "Enter n : " << endl;
    cin >> n;
    a = 1;
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        a = a * 2;
    }
    return 0;
}