#include<iostream>
using namespace std;
bool isPossible(int *arr, int size, int k, int mid){
    int painterCount = 1;
    int time = 0;
    for(int i = 0; i < size; i++){
        if(time+arr[i] <= mid){
            time += arr[i];
        }
        else{
            painterCount++;
            if(painterCount > k || arr[i] > mid){
                return false;
            }
            time = arr[i];
        }
    }
    return true;
}
int getTime(int *arr, int size, int k){
    int start = 0;
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    int ans = -1;
    int end = sum;
    int mid = start + (end - start)/2;
    while(start <= end){
        if(isPossible(arr, size, k, mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int main(){
    int t;
    cout << "Enter the number of testcases : " << endl;
    cin >> t;
    while(t--){
        int n;
        cout << "Enter the number of boards : " << endl;
        cin >> n;
        int k;
        cout << "Enter the number of painters available : " << endl;
        cin >> k;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        cout << "Minimum time to get this job done is : " << getTime(arr, n, k) << endl; 
    }
}
//codestudio solution
// bool isPossible(vector<int> boards, int k, int mid) {
//     int boardCount = 1;
//     int length = 0;
//     for(int i = 0; i < boards.size(); i++) {
//         if(length + boards[i] <= mid) {
//             length += boards[i];
//         }
//         else {
//             boardCount++;
//             if(boardCount> k || boards[i] > mid) {
//                 return false;
//             }
//             length = boards[i];
//         }
//         if(boardCount > k) {
//             return false;
//         }
//     }
//     return true;
// }
// int findLargestMinDistance(vector<int> &boards, int k)
// {
//     //    Write your code here.
//     int start = 0;
//     int sum = 0;
//     int ans = -1;
//     for(int i = 0; i < boards.size(); i++)  {
//         sum += boards[i];
//     }
//     int end = sum;
//     int mid = start + (end - start)/2;
//     while (start <= end) { 
//         if(isPossible(boards, k , mid)){ 
//             end = mid-1;
//             ans = mid;
//         }
//         else { 
//             start = mid + 1;
//         }
//         mid = start + (end - start)/2;      
//     }
//     return ans; 
// }