#include<iostream>
using namespace std;
int binarySearch(int *arr, int size, int element){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start/2);
    while(start < end){
        if(arr[mid] > element){
            end = mid - 1;
        }
        else if(arr[mid] < element){
            start = mid + 1;
        }
        else{
            return mid;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}
int main(){
    int n;
    cout << "Enter the size of array : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array : " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int element;
    cout << "Enter the element you want to search : " << endl;
    cin >> element;
    cout << "It is on index : " << binarySearch(arr, n, element);
}