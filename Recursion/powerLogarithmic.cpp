#include <iostream>
using namespace std;

long long power(int a, int b)
{
    if (b < 0)
    {
        a = 1 / a;
        b = -b;
    }
    long long result = 1;
    while (b != 0)
    {
        if (b % 2 == 1)
        {
            result = a * result;
        }
        a = a * a;
        b = b / 2;
    }
    return result;
}
int main()
{
    int a, b;
    cout << "Enter base : ";
    cin >> a;

    cout << "Enter power : ";
    cin >> b;

    long long result = power(a, b);
    cout << "ans = " << result << endl;
    return 0;
}