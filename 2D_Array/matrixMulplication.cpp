#include <iostream>
using namespace std;
int main()
{
    int m, n, p, q;
    cout << "Enter rows and columns for 1st matrix : ";
    cin >> m >> n;
    int arr[m][n];
    cout << "Enter elements of first matrix : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Enter rows and columns for 2nd matrix : ";
    cin >> p >> q;
    int brr[p][q];
    cout << "Enter elements of second matrix : " << endl;
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin >> brr[i][j];
        }
    }

    if (n != p)
    {
        cout << "Matricies not multtiplacable" << endl;
        return 0;
    }
    int cr = n;
    int res[m][q];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < cr; k++)
            {
                res[i][j] = res[i][j] + arr[i][k] * brr[k][j];
            }
        }
    }
    cout << "Matrix multiplication :- " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cout << res[i][j] << "  ";
        }
        cout << endl;
    }
    return 0;
}