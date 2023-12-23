int floorSqrt(int n)
{
    // Write your code here.
    int start = 0;
    int end = n;
    long ans = -1;
    long mid = start + (end - start)/2;
    while(start <= end){
        long square = mid*mid;
        if(square == n){
            return mid;
        }
        else if(square < n){
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
