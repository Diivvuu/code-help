#include<iostream>
using namespace std;
/*
      1
    1 2 1
  1 2 3 2 1    
1 2 3 4 3 2 1
for n = 4
*/
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int spaces=1;spaces<=n-i;spaces++){
            cout << "  ";
        }
        //first loop
        for(int j=1;j<=i;j++){
            cout << j << " ";
        }
        //second loop
        int numbers = i-1;
        for(int k = 1; k < i;k++ ){
            cout << numbers-- << " ";
        }
        cout << endl;
    }
}