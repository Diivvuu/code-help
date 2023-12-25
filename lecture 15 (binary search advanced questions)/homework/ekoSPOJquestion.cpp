#include <bits/stdc++.h>
using namespace std;


bool isPossible(int *arr, int size, int m, int mid){
    long long sum = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] > mid){
            sum += (arr[i] - mid);
        }

    }
    if(sum >= m){
        return true;
    }
    return false;
}
int getAnswer(int *arr, int size, int m){
	int start = 0;
	int end = arr[size - 1];
    int ans = -1;
    int mid = start + (end - start)/2;
    while(start <= end){
        if(isPossible(arr, size, m, mid)){
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
int main() {
	
	// your code here
	int n;
	cin >> n;
	int arr[n];
	long long m;
	cin >> m;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	sort(arr, arr + n);
	cout << getAnswer(arr, n, m);

	return 0;
}