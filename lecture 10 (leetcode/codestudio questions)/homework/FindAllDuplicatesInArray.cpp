#include<bits/stdc++.h>
using namespace std;
vector<int> findDuplicates(int *arr, int size){
    vector<int> ans;
    sort(arr, arr+size);
    for(int i = 0; i < size - 1; i++){
        if(arr[i] == arr[i+1]){
            ans.push_back(arr[i]);
        }
    }
    return ans;
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
    vector<int> ans1 = findDuplicates(arr, n);
    for(int i = 0; i < ans1.size(); i++){
        cout << ans1[i] << " ";
    }
}
// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& nums) {
//         vector<int> ans;
//         sort(nums.begin(), nums.end());
//         for(int i = 0; i < nums.size() - 1; i++) { 
//             if(nums[i] == nums[i+1]) {
//                 ans.push_back(nums[i]);
//             }
//         }
//         return ans;
//     }
// };