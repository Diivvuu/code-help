#include<iostream>
using namespace std;
/*
A
B B 
C C C
for n = 3
*/
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            char ch = 'A' + i - 1;
            cout << ch++ << " ";
        }
        cout << endl;
    }
}