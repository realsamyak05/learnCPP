#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter no. of elements : ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "before reversing : " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    cout << "after reversing : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}