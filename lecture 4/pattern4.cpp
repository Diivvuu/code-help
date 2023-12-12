#include<iostream>
using namespace std;
/*
for n = 4
1
2 2 
3 3 3 
4 4 4 4 
homework
1
2 3
4 5 6
7 8 9 10
*/
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
    int count = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << count++ << " ";
        }
        cout << endl;
    }
}