#include <iostream>
#include <math.h>
using namespace std;
int main(){
    long long n;
    cout << "Enter a binary number : ";
    cin >> n;
    long int ans = 0;
    int i = 0;
    while (n != 0){
        int bit = n % 10;
        ans = ans + (bit * pow(2, i));
        n = n / 10;
        i++;
    }
    cout << "Your answer is : " << ans << endl;
    return 0;
}