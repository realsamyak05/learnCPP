#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {1, 10, 20, 5, 6, 4};
    int x;
    cin >> x;
    int count = 0;
    for (int i = 0; i < 6; i++)
    {
        if (x < arr[i])
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}