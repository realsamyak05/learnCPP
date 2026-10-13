#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout << "enter sides of triangle : ";
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && a + c > b)
    {
        cout << "Triangle is possible" << endl;
    }
    else
    {
        cout << "Triangle is NOT possible" << endl;
    }
    return 0;
}