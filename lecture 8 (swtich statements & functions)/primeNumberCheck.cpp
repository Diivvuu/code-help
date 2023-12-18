#include<iostream>
using namespace std;

bool isPrime(int number){
    // int n = number;
    for(int i = 2; i <= number/2; i++){
        if(number%i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout << "Enter the number you want to check : " << endl;
    cin >> n;
    if(isPrime(n)){
        cout << "It is a prime number";
    }
    else{
        cout << "It is not a prime number";
    }
    return 0;
}