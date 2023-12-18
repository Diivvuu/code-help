#include<iostream>
using namespace std;
/*
****
***
**
*
for n = 4
*/
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int stars=0;stars < n-i;stars++){
            cout << "*";
        }
        cout <<endl;

    }
}