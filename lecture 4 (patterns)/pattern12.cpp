#include<iostream>
using namespace std;
/*
A }
B C
D E F 
G H I J
for n = 4*/
int main(){
    int n;
    cin >> n;
    char ch = 'A';
    //self
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << ch++ << " "; 
        }
        cout << endl;
    }
}