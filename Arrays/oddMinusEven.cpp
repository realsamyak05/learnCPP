#include <iostream>
using namespace std;
int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int oddSum = 0;
    int evenSum = 0;
    for (int i = 0; i < 9; i++)
    {
        if (i % 2 == 0)
        {
            evenSum += arr[i];
        }
        else
        {
            oddSum += arr[i];
        }
    }
    cout << "Difference between evenSum and oddSum is : " << evenSum - oddSum;
    return 0;
}