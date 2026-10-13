#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter N" << endl;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "Even" << endl;
    }
    if (n % 2 != 0)
    {
        cout << "Odd" << endl;
    }
    return 0;
}