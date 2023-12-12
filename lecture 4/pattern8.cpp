#include<iostream>
using namespace std;
/*
A B C
A B C
A B C
for n = 3*/
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        char ch = 'A';
        for(int j=1;j<=n;j++){
            cout << ch++ << " ";
        }
        cout << endl;
    }
}