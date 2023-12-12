#include<iostream>
using namespace std;
/*
1 1 1 1
  2 2 2 
    3 3 
      4
    for n = 4
*/
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int spaces=1;spaces<i;spaces++){
            cout << " ";
        }
        for(int numbers = i; numbers <= n; numbers++){
            cout << i;
        }
        cout << endl;
    }
}