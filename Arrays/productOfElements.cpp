#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    long long product = 1;
    for (int i = 0; i < 5; i++)
    {
        product *= arr[i];
    }
    cout << "Product is : " << product;
    return 0;
}