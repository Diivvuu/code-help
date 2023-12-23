#include<iostream>
using namespace std;
int getPivot(int *arr, int size){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    while(start < end){
        if(arr[0] <= arr[mid]) start = mid + 1;
        else end = mid;
        mid = start + (end - start)/2;
    }
    return start;
}
int main(){
    int n;
    cout << "Enter size of array : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter elements of array : " << endl;
    for(int i = 0; i < n; i++) { 
        cin >>  arr[i];
    }
    cout << "Pivot Index is : " << getPivot(arr, n) << endl;
}