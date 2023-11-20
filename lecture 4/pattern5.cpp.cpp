/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

/*
for n = 4 
1 
2 3 
3 4 5 
4 5 6 7*/
int main()
{
    int n;
    cin >> n;
//option1
    for(int i = 1; i <= n; i++){
        int count = i;
        for(int j = 1;j <= i; j++){
            cout << count++ << " ";
        }
        cout << endl;
    }
//option2

    for(int i = 1; i <= n; i++){
        for(int j = i; j < i*2; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}