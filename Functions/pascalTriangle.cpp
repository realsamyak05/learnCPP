#include <iostream>
using namespace std;
int fact(int x)
{
    if (x == 0)
        return 1;
    else
        return x * fact(x - 1);
}
int ncr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
int main()
{
    int n, i, j;
    cout << "Enter number of rows : ";
    cin >> n;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << ncr(i, j) << " ";
        }
        cout << endl;
    }
    return 0;
}