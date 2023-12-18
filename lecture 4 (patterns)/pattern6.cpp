#include<iostream>
using namespace std;

/*
1 
2 1
3 2 1
4 3 2 1
for n = 4
*/
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int value = i;
        for(int j = 1; j <= i; j++){
            cout << value-- << " "; //row - column + 1
        }
        cout << endl;
    }
}