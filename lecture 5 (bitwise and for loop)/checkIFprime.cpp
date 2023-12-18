#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    bool flag = 0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout << "not a prime number";
    }
    else{
        cout << "prime number it is";
    }
    return 0;
}