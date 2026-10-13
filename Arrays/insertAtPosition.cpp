#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of elements (max 19) : ";
    cin >> n;
    int arr[20];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter position to insert (0 - based index) : ";
    int pos;
    cin >> pos;
    if (pos > n)
    {
        cout << "Position does not exist.";
        return 0;
    }
    int num;
    cout << "Enter new element : ";
    cin >> num;
    for (int i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = num;
    n++;
    cout << "Your array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    return 0;
}