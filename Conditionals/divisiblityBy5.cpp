#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a posivite integer" << endl;
    cin >> n;

    if (n < 0)
    {
        cout << "negative number error" << endl;
    }
    else
    {
        if (n % 5 == 0)
            cout << "Divisible by 5" << endl;
        else
            cout << "Not divisible n by 5" << endl;
    }
    return 0;
}