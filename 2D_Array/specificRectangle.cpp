#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter rows and columns : ";
    cin >> m >> n;
    int arr[m][n];
    cout << "Enter your elements : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int l1, r1, l2, r2;
    cout << "Enter (l1, r1) : ";
    cin >> l1 >> r1;
    cout << "Enter (l2, r2) : ";
    cin >> l2 >> r2;
    if (l1 > m || r1 > n || l2 > m || r2 > n)
    {
        cout << "Invalid rectangle." << endl;
        return 0;
    }
    int sum = 0;
    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
        {
            sum += arr[i][j];
        }
    }
    cout << "Sum of elements in required rectangle is : " << sum << endl;
    return 0;
}