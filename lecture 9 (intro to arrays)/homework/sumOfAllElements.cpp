#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of array : " << endl;
    cin >> n;
    int arr[n];
    int sum = 0;
    cout << "Enter the elements of array : " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "sum is " << sum;
}