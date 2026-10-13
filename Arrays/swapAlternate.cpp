#include <bits/stdc++.h>
using namespace std;
// void swap(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
int main(){
    int n;
    cout << "Enter number of elements : ";
    cin >> n;

    int arr[n];
    cout << "Enter elements in array : ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int j = 0;
    for(int i = 0; i < n/2; i++){
        swap(arr[j], arr[j+1]);
        j = j + 2;
    }

    cout << "After swapping alternate : " << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}