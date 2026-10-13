#include <iostream>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    s.push_back('a');
    cout << s;
    return 0;
}