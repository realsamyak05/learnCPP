#include <iostream>
using namespace std;
int main()
{
    int n, count = 0, i;
    cout << "Enter a number : ";
    cin >> n;

    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    cout << "Number of digits is = " << count;
    return 0;
}