#include<iostream>
using namespace std;

/* 
1 2 3 
4 5 6
7 8 9
for n = 3

also reverse
9 8 7 
6 5 4 
3 2 1
*/
int main(){
    int n;
    cin >> n;
    int count = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << count++ << " ";
        }
        cout << endl;
    }
    int count1 = n*n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << count1-- << " ";
        }
        cout << endl;
    }
}