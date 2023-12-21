int firstOccurence(vector<int>& arr, int size, int element){
    int ans = -1;
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    while(start <= end){
        if(arr[mid] == element){
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] > element){
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int lastOccurence(vector<int>& arr, int size, int element){
    int ans = -1;
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    while(start <= end){
        if(arr[mid] == element){
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] < element){
            start = mid + 1;
        } 
        else {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair<int, int> p;
    p.first = firstOccurence(arr, n, k);
    p.second = lastOccurence(arr, n, k);
    return p;
}