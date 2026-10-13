#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter ages of Ram, Shyam and Ajay: ";
    cin >> a >> b >> c;
    if (a < b)
    {
        if (a < c)
        {
            cout << "Ram is youngest" << endl;
        }
        else
        {
            cout << "Ajay is youngest" << endl;
        }
    }
    else
    {
        if (b < c)
        {
            cout << "Shyam is youngest" << endl;
        }
        else
        {
            cout << "Ajay is youngest" << endl;
        }
    }
    return 0;
}