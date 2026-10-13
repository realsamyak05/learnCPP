#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    int arr[n];
    cout << "Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool isPallindrome = 1;
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (arr[i] != arr[j])
        {
            isPallindrome = 0;
            break;
        }
        i++;
        j--;
    }
    if (isPallindrome == 1)
    {
        cout << "Array is Pallindrome." << endl;
    }
    else
    {
        cout << "Array is not pallindrome." << endl;
    }
    return 0;
}