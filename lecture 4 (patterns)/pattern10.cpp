#include<iostream>
using namespace std;
/*
A B C
B C D
C D E
for  n = 3
*/
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        char ch = 'A' - 1 + i;
        for(int j=1;j<=n;j++){       
            cout << ch++ << " ";
        }
        cout << endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char ch = 'A' + i + j - 2;
            cout << ch++ << " ";
        }
        cout << endl;
    }
}