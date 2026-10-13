#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char ch;
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter your operator: ";
    cin >> ch;
    cout << "Enter 2nd number: ";
    cin >> b;

    switch (ch)
    {
    case '+':
        cout << a + b;
        break;

    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;
    default:
        cout << "Invalid Operator";
    }
    return 0;
}