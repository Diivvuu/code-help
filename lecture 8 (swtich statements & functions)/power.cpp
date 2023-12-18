#include<iostream>
using namespace std;

int power(int num, int power){
    int ans = num;
    for(int i = 1; i < power; i++){
        ans = ans*num;
    }
    return ans;
}
int main(){
    int n, p;
    cout << "Enter the first number : " << endl;
    cin >> n;
    cout << "Enter the second number : " << endl;
    cin >> p;
    cout  << "Your answer is : " << power(n, p) << endl;
}