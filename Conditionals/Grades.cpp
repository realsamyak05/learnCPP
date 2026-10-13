#include <iostream>
using namespace std;
int main()
{
    int percent;
    cout << "Enter your obtained percentage" << endl;
    cin >> percent;
    if ((percent >= 81) && (percent <= 100))
    {
        cout << "Very good" << endl;
    }
    else if ((percent >= 61) && (percent <= 80))
    {
        cout << "Good" << endl;
    }
    else if ((percent >= 41) && (percent <= 60))
    {
        cout << "Average" << endl;
    }
    else if (percent <= 40)
    {
        cout << "Fail" << endl;
    }
    else
    {
        cout << "Enter a valid percentage" << endl;
    }
    return 0;
}