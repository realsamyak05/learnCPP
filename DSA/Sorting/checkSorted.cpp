#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> &v, int start, int end)
{
    if (start == end)
    {
        return true;
    }

    if (end - start == 1)
        return v[end] >= v[start];

    int mid = start + (end - start) / 2;
    return isSorted(v, start, mid) && isSorted(v, mid + 1, end) && v[mid] <= v[mid + 1];
}

int main()
{
    int n;
    cout << "Enter number of elements : ";
    cin >> n;

    vector<int> v(n);

    cout << "enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if (isSorted(v, 0, n - 1))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    return 0;
}