//codestudio solution
/*
#include<bits/stdc++.h>
bool isPossible(vector<int> &stalls, int k , int mid){
    int cowCount = 1;
    int stallPosition = stalls[0];
    for(int i = 0; i < stalls.size(); i++){
        if(stalls[i] - stallPosition >= mid){
            cowCount++;
            if(cowCount == k){
                return true;
            }
            stallPosition = stalls[i];
        }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    sort(stalls.begin(), stalls.end());
    int start = 0;
    int maxi = INT_MIN;
    for(int i = 0;i < stalls.size(); i++){
        maxi = max(maxi, stalls[i]);
    }
    int end = maxi;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start <= end){
        if(isPossible(stalls, k, mid)){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
*/
#include<bits/stdc++.h>
using namespace std;
bool isPossible(int *arr, int size, int cows, int mid){
    int stallPosition = arr[0];
    int cowCount = 1;
    for(int i = 0; i < size; i++){
        if(arr[i] - stallPosition >= mid){
            cowCount++;
            if(cowCount == cows){
                return true;
            }
            stallPosition = arr[i];
        }
    }
    return false;
}
int getDistance(int *arr, int size, int cows){
    int start = 0;
    int maxi = INT_MIN;
    for(int i = 0; i < size; i++){
        maxi = max(maxi, arr[i]);
    }
    int end = maxi;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start <= end){
        if(isPossible(arr, size, cows, mid)){
            ans = mid;
            start = mid + 1; 
        }
        else{
            end = mid - 1;
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
        cout << "Enter the number of stall : " << endl;
        cin >> n;
        int arr[n];
        int cows;
        cout << "Enter the number of cows : " << endl;
        cin >> cows;
        cout << "Enter the positions of stalls : " << endl;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr, arr + n);
        cout << "Maximum possible minimum distance is : " << getDistance(arr, n, cows) << endl;
    }
}
