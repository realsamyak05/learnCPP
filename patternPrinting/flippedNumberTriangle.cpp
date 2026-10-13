#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout << "Enter number of rows : ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}