#include <iostream>
using namespace std;
int main()
{
    int arr[5][3];
    cout << "enter elements : ";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "original matrix : " << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "tranpose is : " << endl;
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 5; i++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}