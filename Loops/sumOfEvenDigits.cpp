#include <iostream>
using namespace std;
int main()
{
    int n, i, temp, sum = 0;
    cout << "Enter a number : ";
    cin >> n;
    while (n != 0)
    {
        temp = n % 10;
        if (temp % 2 == 0)
        {
            sum = sum + temp;
        }
        n = n / 10;
    }
    cout << sum;
    return 0;
}