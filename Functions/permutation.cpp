#include <iostream>
using namespace std;
int fact(int x)
{
    if (x == 1)
        return 1;
    else
        return x * fact(x - 1);
}

int permutation(int n, int r)
{
    return fact(n) / fact(n - r);
}
int main()
{
    int n, r;
    cout << "Enter n and r : ";
    cin >> n >> r;

    cout << "Permutation nPr = " << permutation(n, r);
    return 0;
}