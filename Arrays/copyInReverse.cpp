#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[5];

    for (int i = 0; i < 5; i++)
    {
        brr[i] = arr[5 - i - 1];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << brr[i] << " ";
    }

    return 0;
}