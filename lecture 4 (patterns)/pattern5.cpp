#include<iostream>
using namespace std;
/*
1
2 3 
3 4 5
4 5 6 7*/

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int value = i;
        for(int j = 1; j <= i; j++){
            cout << value++ << " ";
        }
        cout << endl;
    }
    //without extra variable
    for(int i = 1; i <= n; i++){
        for(int j = i; j < i*2; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}