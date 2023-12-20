//not best approach gives error 
// #include <bits/stdc++.h> 
// vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
// 	// Write your code here.
//     vector<vector<int>> ans;
//     set<vector<int>> visited;
//     for(int i = 0; i < n-2; i++){
//         for(int j = i + 1; j < n-1; j++){
//             for(int k = j + 1; k < n; k++){
//                 if(arr[i] + arr[j] + arr[k] == K){
//                     vector<int> temp;
//                     temp.push_back(arr[i]);
//                     temp.push_back(arr[j]);
//                     temp.push_back(arr[k]);
//                     sort(temp.begin(), temp.end());
//                     if(visited.find(temp) == visited.end()){
//                         ans.push_back(temp);
//                         visited.insert(temp);
//                     }
//                 }
//             }
//         }
//     }
//     return ans;
// }