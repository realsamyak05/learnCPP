#include <iostream>
using namespace std;
int main()
{
    string s;
    cout << "Enter string : ";
    getline(cin, s);
    int n = s.length();
    string vowels = {'a', 'e', 'i', 'o', 'u'};
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (s[i] == vowels[j])
            {
                count++;
            }
        }
    }
    cout << "Number of vowels = " << count;
    return 0;
}