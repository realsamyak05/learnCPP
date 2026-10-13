#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int m, n;
    cout << "enter number of rows and columns :";
    cin >> m >> n;
    int arr[m][n];
    cout << "Enter elements : ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int mx = INT_MIN;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mx = max(mx, arr[i][j]);
        }
    }
    cout << "Max element is : " << mx << endl;
    return 0;
}