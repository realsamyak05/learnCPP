#include <iostream>
using namespace std;
int main()
{
    int n, fact, i, j;
    cout << "Enter n : ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        fact = 1;
        for (j = 1; j <= i; j++)
        {
            fact = fact * j;
        }
        cout << fact << endl;
    }
    return 0;
}