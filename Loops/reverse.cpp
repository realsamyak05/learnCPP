#include <iostream>
using namespace std;
int main()
{
    int n, rev, digit;
    cout << "Enter a num : ";
    cin >> n;
    while (n != 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    cout << "Reverse : " << rev;
    return 0;
}