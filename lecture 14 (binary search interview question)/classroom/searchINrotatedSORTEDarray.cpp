int getPivot(vector<int> &arr, int size){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    while(start < end){
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}
int binarySearch(vector<int> &arr, int start, int end, int element){
    int mid = start + (end - start)/2;
    while(start <= end){
        if(arr[mid] == element){
            return mid;
        }
        else if(arr[mid] > element){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}
int search(vector<int>& arr, int n, int k)
{
    int pivot = getPivot(arr, n);
    if(k >= arr[pivot] && k <= arr[n-1]){
        return binarySearch(arr, pivot, n - 1, k);
    }
    else{
        return binarySearch(arr, 0, pivot - 1, k);
    }
    // Write your code here.
    // Return the position of K in ARR else return -1.
}
