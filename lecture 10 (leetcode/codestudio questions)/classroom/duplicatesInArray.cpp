#include<iostream>
using namespace std;
int findDuplicate(int *arr, int size){
    int ans = 0;
    for(int i = 0; i < size; i++){
        ans ^= arr[i];
    }
    cout << ans << endl;;
    for(int i = 1; i < size; i++){
        ans ^= i;
    }
    return ans;
}
int main(){
    int t;
    cout << "Enter the number of test cases : " << endl;
    cin >> t;
    while(t--){
        int n;
        cout << "Enter the size of array : " << endl;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        cout << findDuplicate(arr, n);
    }
}
