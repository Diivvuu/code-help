#include<iostream>
using namespace std;
bool isPresent(int arr[], int size, int element){
    for(int i = 0; i < size; i++){
        if(element == arr[i]){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cout << "Enter the size of array : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array : " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int element;
    cout << "Enter the element you want to search : " << endl;
    cin >> element;
    if (isPresent(arr, n, element)){
        cout << "Element is Present" << endl;
    }
    else{
        cout << "Element is not Present" << endl;
    }
}