#include<bits/stdc++.h>
using namespace std;

bool uniqueNumberOfOccurences(int *arr, int size){
    vector<int> ans;
    int i = 0;
    sort(arr, arr+size);
    while(i < size){
        int count = 1;
        for(int j = i + 1; j < size; j++){
            if(arr[i] == arr[j]){
                count++;
            }
            else{
                break;
            }
        }
        i+=count;
        ans.push_back(count);
    }
    sort(ans.begin(), ans.end());
    for(int i = 0; i < ans.size() - 1; i++){
        if(ans[i] == ans[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout << "Enter the size of array : " << endl;
    cin >> n;
    cout << "Enter the elements of array : " << endl;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    if(uniqueNumberOfOccurences(arr, n)){
        cout << "True";
    }
    else{
        cout << "False";
    }
    return 0;
}
// //leetcode solution
// class Solution {
// public:
//     bool uniqueOccurrences(vector<int>& arr) {
//         vector<int> ans;
//         int i = 0;
//         sort(arr.begin(), arr.end());
//         while(i < arr.size()) {
//             int count = 1;
//             for(int j = i+1; j < arr.size(); j++) {
//                 if(arr[i] == arr[j]) {
//                     count++;
//                 }
//                 else {
//                     break;
//                 }
//             }
//             i+=count;
//             ans.push_back(count);
//         }
//         sort(ans.begin(), ans.end());
//         for(int i = 0; i < ans.size() - 1; i++){
//             if(ans[i] == ans[i+1]){
//                 return false;
//             }
//         }
//         return true;    
//     }
// };
