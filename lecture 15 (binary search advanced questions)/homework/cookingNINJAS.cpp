#include <bits/stdc++.h> 
bool isPossible(vector<int> &rank, int m, int mid){
    int dishes = 0;
    int sum = 0;
    for(int i = 0; i < rank.size(); i++){
        for(int j = 1; j <= m; j++){
            sum += rank[i]*j;
            if(sum <= mid){
                dishes++;
            }
            if(dishes == m){
                return true;
            }
        }
        sum = 0;
    }
    return false;
}

int minCookTime(vector<int> &rank, int m){
    // Write your code here
    int start = 0;
    int ans = -1;
    int sum = 0;
    for(int i = 0; i <= m; i++){
        sum += rank[rank.size() - 1] * i;
    }
    int end = sum;
    int mid = start + (end - start)/2;
    while(start <= end){
        if(isPossible(rank, m, mid)){
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
