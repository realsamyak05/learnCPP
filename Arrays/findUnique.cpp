#include <bits/stdc++.h>
using namespace std;
int unique(int *arr, int size){
    int ans = 0;
    for(int i = 0; i < size; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}
int main(){
    int n;
    cout << "Enter number of elements : ";
    cin >> n;

    int arr[n];
    cout << "Enter elements : ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int ans = unique(arr, n);

    cout << "Unique Element is " << ans;
    return 0;
}