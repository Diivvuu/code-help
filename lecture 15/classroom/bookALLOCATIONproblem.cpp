//codestudio solution
bool isPossible(int *arr, int n, int m, int mid){
    int pageCount = 0;
    int studentCount = 1;
    for(int i = 0; i < n; i++){
        if(pageCount + arr[i] <= mid){
            pageCount += arr[i];
        }
        else{
            studentCount++;
            if(studentCount > m || arr[i] > mid){
                return false;
            }
            pageCount = arr[i];
        }
    }
    return true;
}
int findPages(int *arr, int n, int m){
    int start = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    int end = sum;
    int ans = -1;
    int mid = start + (end - start)/2;
    while(start <=  end){
        if(isPossible(arr, n, m, mid)){
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
#include<iostream>
using namespace std;
int main(){
    int t;
    cout << "Enter the number of test cases : " << endl;
    cin >> t;
    while(t--){   
        int n;
        cout << "Enter the number of books : " << endl;
        cin >> n;
        int m;
        cout << "Enter the number of students : " << endl;
        cin >> m;
        cout << "Enter the number of pages for each book : " << endl;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        cout << "Number of maximum number pages assigned to a student to be minimum is : " << findPages(arr, n, m) << endl;
    }
}
// bool isPossible(vector<int> &arr, int n, int m, int mid){
//     int pagesSum = 0;
//     int bookCount = 1;
//     for(int i = 0; i < n; i++){
//         if(pagesSum + arr[i] <= mid){
//             pagesSum += arr[i];
//         }
//         else{
//             bookCount++;
//             if(bookCount > m || arr[i] >  mid){
//                 return false;
//             }
//             pagesSum = arr[i];
//         }
//     }
//     return true;
// }
// int findPages(vector<int>& arr, int n, int m) {
//     // Write your code here.
//     if(n < m){
//         return -1;
//     }
//     int start = 0;
//     int sum = 0;
//     for(int i = 0; i < n; i++){
//         sum += arr[i];
//     }
//     int end = sum;
//     int ans = -1;
//     int mid = start + (end - start)/2;
//     while(start <= end){
//         if(isPossible(arr, n, m, mid)){
//             ans = mid;
//             end = mid - 1;
//         }
//         else{
//             start = mid + 1;
//         }
//         mid = start + (end - mid)/2;
//     }
//     return ans;
// }