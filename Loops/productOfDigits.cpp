#include <iostream>
using namespace std;
int main()
{
    int n, temp, i, product = 1;
    cout << "ENter a number : ";
    cin >> n;
    while (n != 0)
    {
        temp = n % 10;
        product = product * temp;
        n = n / 10;
    }
    cout << "product of digits is " << product;
    return 0;
}