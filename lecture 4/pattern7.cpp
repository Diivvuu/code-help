#include<iostream>
using namespace std;
/*
A A A
B B B
C C C
for n = 3
*/
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << (char(65 + i)) << " ";
        }
        cout << endl;
    }
}