#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of array : " << endl;
    cin >> n;
    int arr[n];
    int element;
    cout << "Enter the element : " << endl;
    cin >> element;
    for(int i = 0; i < n; i++){
        arr[i] = element;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}