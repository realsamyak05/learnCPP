#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;
    if ((n % 5 == 0 || n % 3 == 0) && n % 15 != 0)
    {
        cout << "Divisible 5 OR 3 but NOT by 15" << endl;
    }
    else
    {
        cout << "no";
    }
    return 0;
}