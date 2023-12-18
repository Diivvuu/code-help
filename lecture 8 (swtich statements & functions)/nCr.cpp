#include<iostream>
using namespace std;
int factorial(int num){
    if(num == 1 || num == 0){
        return 1;
    }
    return num*factorial(num-1);
}
int nCr(int n, int r){
    int numerator = factorial(n);
    int denominator = factorial(r)* factorial(n-r);
    return numerator/denominator;
}
int main(){
    int n, r;
    cin >> n >> r;
    cout << nCr(n, r) << endl;
    return 0;
}