//codestudio solution
/*
void bubbleSort(vector<int>& arr, int n){
    for(int i = 1; i < n; i++){
        for(int j = 0; j < n - i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
*/
#include<iostream>
using namespace std;
void printArray(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void bubbleSort(int *arr, int n){
    for(int i = 1; i < n; i++){
        for(int j = 0; j < n - i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
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
        bubbleSort(arr, n);
        printArray(arr, n);
    }
}
