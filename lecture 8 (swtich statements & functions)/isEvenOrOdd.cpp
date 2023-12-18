#include<iostream>
using namespace std;

// agar koi bhi number ka and 1 true ho - than its an odd number
bool isEven(int a){
    if(a & 1){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    cin >> n;
    if(isEven(n)){
        cout << "It's and odd number";
    }
    else{
        cout << "It's an even number";
    }
}