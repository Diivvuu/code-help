#include<iostream>
using namespace std;

/*
1 2 3 4 
1 2 3 4 
1 2 3 4
for n = 4
*/
/* 
also reverse
4 3 2 1
4 3 2 1 
4 3 2 1
*/
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    for(int i = 1; i <= n; i++){
        for(int j = n; j >= 1; j--){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}