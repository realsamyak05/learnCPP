#include <iostream>
using namespace std;
int main()
{
    int n, temp, sum = 0, i;
    cout << "Enter a number : ";
    cin >> n;
    temp = n;
    while (n != 0)
    {
        temp = n % 10;
        sum = sum + temp;
        n = n / 10;
    }
    cout << "Sum of digits" << " is " << sum;
    return 0;
}