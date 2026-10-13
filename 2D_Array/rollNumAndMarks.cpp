#include <iostream>
using namespace std;
int main()
{
    int arr[4][2];
    for (int i = 0; i < 4; i++)
    {
        arr[i][0] = i + 1;
    }
    cout << "Enter marks : ";
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i][1];
    }
    cout << "Marks | RollNumber" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] << "          ";
        }
        cout << endl;
    }
    return 0;
}