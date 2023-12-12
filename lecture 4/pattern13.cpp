#include<iostream>
using namespace std;
/*
A
B C 
C D E
D E F G*/
int main(){
    int n;
    cin >> n;
    //self
    for(int i=1;i<=n;i++){
        char ch = 'A' + i - 1;
        for(int j=1;j<=i;j++){
            cout << ch++ << " ";
        }
        cout <<  endl;
    }
    //the babbar answer
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            char ch = 'A' + i + j - 2;
            cout << ch++ << " ";
        }
        cout << endl;
    }
}