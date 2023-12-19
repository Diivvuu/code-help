#include<iostream>
using namespace std;
int findUnique(int *arr, int size){
    int unique = 0;
    for(int i = 0; i < size; i++){
        unique ^= arr[i];
    }
    return unique;
}
int main(){
    int n;
    cout << "Enter size : " << endl;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << findUnique(arr, n); 
}