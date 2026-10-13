#include <iostream>
using namespace std;
int main()
{
    int i, j, m, n;
    cout << "Enter rows and cols : ";
    cin >> m >> n;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}