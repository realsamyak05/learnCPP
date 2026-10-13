#include <iostream>
using namespace std;
int main()
{
    float x, y;
    cout << "Enter X and Y coordinates: " << endl;
    cin >> x >> y;
    if (x == 0 && y == 0)
    {
        cout << "At origin" << endl;
    }
    else if (x == 0)
    {
        cout << "On y-axis" << endl;
    }
    else if (y == 0)
    {
        cout << "On x-axis" << endl;
    }
    else if (x > 0 && y > 0)
    {
        cout << "In first quadrant" << endl;
    }
    else if (x < 0 && y > 0)
    {
        cout << "In second quadrant" << endl;
    }
    else if (x < 0 && y < 0)
    {
        cout << "In third quadrant" << endl;
    }
    else if (x > 0 && y < 0)
    {
        cout << "In fourth quadrant" << endl;
    }
    return 0;
}