#include <iostream>
using namespace std;
int main()
{
    float r, v;
    float pi = 3.14;
    cout << "Enter radius of sphere: ";
    cin >> r;
    v = 4 * pi * r * r * r / 3;
    cout << "Volume : " << v;
    return 0;
}