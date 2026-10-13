#include <iostream>
using namespace std;
int main()
{
    int n, x, rev, sum, digit;
    cout << "ENter a number : ";
    cin >> n;
    x = n;
    while (n != 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    sum = x + rev;
    cout << "sum of number and it's reverse = " << sum;
    return 0;
}