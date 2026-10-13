#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "enter n: ";
    cin >> m;
    for (int i = m; i <= m * 10; i += m)
    {
        cout << i << endl;
    }
    return 0;
}