#include<iostream>
using namespace std;
/*
0 1 1 2 3 5 8 13 21...*/
int main(){
    int n;
    cin >> n;
    int a=0;
    int b=1;
    cout << a << " " << b << " ";

    for(int i=1;i<n-1;i++){
        int nextNumber = a+b;
        cout << nextNumber << " ";
        a = b;
        b = nextNumber;
    }
    return 0;
}