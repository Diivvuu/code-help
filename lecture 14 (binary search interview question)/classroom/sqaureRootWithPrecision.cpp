#include<iostream>
using namespace std;
int squareRoot(int n){
    int start = 0;
    int end = n;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start <= end){
        int square = mid*mid;
        if(square == n){
            return mid;
        }
        else if (square < n){
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
double morePrecision(int n, int squareRoot){
    double factor = 1;
    double ans = squareRoot;
    for(int i = 0; i < 3; i++){
        factor/=10;
        for(double j = ans; j*j < n; j+=factor){
            ans = j;
        }
    }
    return ans;
}
int main(){
    int n;
    cout << "Enter the number : " << endl;
    cin >> n;
    int sqr = squareRoot(n);
    cout << "Square root is " << sqr << endl;
    cout << "and precised to 3 places is " << morePrecision(n, sqr) << endl;
}