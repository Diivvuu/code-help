#include<iostream>
using namespace std;
/*
A B C |
D E F 
G H I
for n = 3
*/
int main(){
    int n;
    cin >> n;
    char ch = 'A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << ch++ << " ";
        }
        cout << endl;
    }
}