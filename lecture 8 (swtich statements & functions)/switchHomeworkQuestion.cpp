#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int n100, n50, n20, n1;
    n100 = n50 = n20 = n1 = 0;
    switch (n >= 100){
        case 1:
            n100 = n/100;
            n -= n100*100;            
    }
    switch (n >= 50){
        case 1:
            n50 = n/50;
            n -= n50*50;        
    }
    switch (n >= 20){
        case 1:
            n20 = n/20;
            n -= n20*20;
    }
    switch (n >= 1){
        case 1:
            n1 = n/1;
            n -= n1*1;
    }
    cout << "So, we need : " << endl;
    cout << n100 << " 100 rupee notes" << endl;
    cout << n50 << " 50 rupee notes" << endl;
    cout << n20 << " 20 rupee notes" << endl;
    cout << n1 << " 1 rupee notes" << endl;
}