#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {10, 20, 80, 50, 7, 77, 33, 100, 8, 4000};
    int mx = arr[0];
    for (int i = 0; i < 10; i++)
    {

        // max = arr[i];
        mx = max(mx, arr[i]);
    }
    cout << "Max elements : " << mx << endl;
    return 0;
}