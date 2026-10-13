#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n:" << endl;
    cin >> n;
    if (n % 5 == 0 || n % 3 == 0)
    {
        cout << "Divisible by 5 OR 3" << endl;
    }
    else
    {
        cout << "NOT divisible by 5 OR 3" << endl;
    }
    return 0;
}