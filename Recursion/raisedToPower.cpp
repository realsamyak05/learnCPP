#include <iostream>
using namespace std;

int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else
    {
        return a * power(a, b - 1);
    }
}

int main()
{
    int a, b;
    cout << "enter base : ";
    cin >> a;

    cout << "enter power : ";
    cin >> b;

    long long result = power(a, b);
    // printf("%lld", result);

    cout << "result = ";
    cout << result << endl;
    cout << "====== code end =======";
    return 0;
}