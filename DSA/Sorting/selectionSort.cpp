#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for (int i = 0; i < n; i++){
        int minIndex = i;
        for(int j = i+1; j < n; j++){
            if (arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main(){
    cout << "Enter n : ";
    int n;
    cin >> n;

    cout << "Enter elements : ";
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Sorted Array : ";
    selectionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}