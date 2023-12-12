#include<iostream>
using namespace std;
/*
D
C D
B C D
A B C D
for n = 4
*/
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        char ch = 'A' + n - i;
        for(int j=1;j<=i;j++){
            cout << ch++ << " ";
        }
        cout<<endl;
    }
}