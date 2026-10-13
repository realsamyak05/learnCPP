#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of elements : ";
    cin >> n;
    int arr[n];
    cout << "Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int pos;
    cout << "Enter position to delete from (0-based index) : ";
    cin >> pos;
    if (pos > n)
    {
        cout << "Position out of range.";
        return 0;
    }
    for (int i = pos + 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    n--;
    cout << "Array after deleting : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}