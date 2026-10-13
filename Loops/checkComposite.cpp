#include <iostream>
using namespace std;
int main()
{
    int n, i, flag = 0;
    cout << "Enter number : ";
    cin >> n;

    if (n == 1)
    {
        cout << n << " is neither prime nor composite";
        return 0;
    }
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << n << " is composite";
    }

    else
    {
        cout << n << " is not composite";
    }
    return 0;
}