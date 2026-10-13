#include <iostream>
using namespace std;
int main()
{
    float l, b, area, perimeter;
    cout << "Enter length and breadth of rectangle : " << endl;
    cin >> l >> b;
    area = l * b;
    perimeter = 2 * (l + b);
    if (perimeter == area)
    {
        cout << "Perimeter is equal to area" << endl;
    }
    else if (perimeter > area)
    {
        cout << "Perimeter is greater than area" << endl;
    }
    else if (area > perimeter)
    {
        cout << "Area is greater than perimeter" << endl;
    }
    return 0;
}