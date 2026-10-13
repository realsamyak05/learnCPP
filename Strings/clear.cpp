#include <iostream>
using namespace std;
int main()
{
    string s = "Samyak";
    cout << s << "  " << s.length() << endl;
    s.clear();
    cout << s << "  " << s.length() << endl;
    return 0;
}