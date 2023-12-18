#include<iostream>
using namespace std;
/*
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1
for n = 5

*/
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        //first triangle - numbers
        for(int first=1;first<=n-i+1;first++){
            cout << first << " ";
        }
        //second traingle - stars
        for(int stars1=1;stars1<i;stars1++){
            cout << "* ";
        }
        //third triangle - stars
        for(int stars2=1;stars2<i;stars2++){
            cout<< "* ";
        }
        //fourth triangle - numbers
        int numbers = n-i+1;
        for(int second = n;second>=i;second--){
            cout << numbers-- << " ";
        }
        cout << endl;
    }
}