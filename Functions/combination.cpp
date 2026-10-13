#include <iostream>
using namespace std;
int fact(int x)
{
    if (x == 1)
        return 1;
    else
        return x * fact(x - 1);
}
float combination(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
int main()
{
    int n, r;
    cout << "Enter n: ";
    cin >> n;

    cout << "Enter r: ";
    cin >> r;

    cout << "Combination nCr : " << combination(n, r);
    return 0;
}