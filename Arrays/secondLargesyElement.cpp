#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[10] = {10, 8, 7, 4, 2, 1, 3, 5, 6, 9};
    int mx = INT_MIN;
    int sMax = INT_MIN;
    for (int i = 0; i < 10; i++)
    {
        mx = max(mx, arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (sMax < arr[i] && arr[i] != mx)
        {
            sMax = arr[i];
        }
    }
    cout << "Largest element is : " << mx << endl;
    cout << "Second Largest element is : " << sMax;
    return 0;
}