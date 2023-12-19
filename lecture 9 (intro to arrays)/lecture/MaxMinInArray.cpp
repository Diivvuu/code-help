#include<iostream>
using namespace std;
int minimumVal(int arr[], int size){
    int ans = INT_MAX;
    for(int i = 0; i < size; i++){
        if(arr[i] < ans){
            ans = arr[i];
        }
    }
    return ans;
}
int maximumVal(int arr[], int size){
    int ans = INT_MIN;
    for(int i = 0; i < size; i++){
        if(arr[i] > ans){
            ans = arr[i];
        }
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Minimum value is : " << minimumVal(arr, n) << endl;
    cout << "Maximum value is : " << maximumVal(arr, n) << endl;
}