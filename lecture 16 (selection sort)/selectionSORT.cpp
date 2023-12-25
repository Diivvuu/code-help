#include<bits/stdc++.h>
using namespace std;
void printArray(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
void selectionSort(int *arr, int n){
    for(int i = 0; i < n; i++){
        int minIndex = i;
        for(int j = i + 1; j < n; j++){
            if(arr[minIndex] > arr[j]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}
int main(){
    int t;
    cout << "Enter the number of testcases : " << endl;
    cin >> t;
    while(t--){
        int n;
        cout << "Enter the size of array : " << endl;
        cin >> n;
        int arr[n];
        cout << "Enter the elements of array : " << endl;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        selectionSort(arr, n);
        printArray(arr, n);
    }
}