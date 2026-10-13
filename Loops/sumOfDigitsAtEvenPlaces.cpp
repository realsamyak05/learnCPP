#include <iostream>
using namespace std;
int main()
{
    int n, temp, sum = 0, position;
    cout << "Enter a number : ";
    cin >> n;
    position = 1;
    while (n != 0)
    {
        temp = n % 10;
        if (position % 2 == 0)
        {
            sum = sum + temp;
        }
        n = n / 10;
        position++;
    }
    cout << sum;
    return 0;
}