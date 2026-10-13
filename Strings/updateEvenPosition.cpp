#include <iostream>
using namespace std;
int main()
{
    string s;
    cout << "Enter your string : ";
    getline(cin, s);
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            s[i] = 'a';
        }
    }
    cout << "After update : ";
    cout << s;
    return 0;
}