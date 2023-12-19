#include<iostream>
using namespace std;
int main(){
    int a = 3,c=3, b = 4;
    c = c^a;
    a = a ^ b;
    
    cout << a << " " << c;
}