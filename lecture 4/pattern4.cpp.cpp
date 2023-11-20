/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
/*
1 
2 2 
3 3 3 
4 4 4 4 
*/
int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << i  << " ";
        }
        cout << endl;
    }
    
/*
homework
1 
2 3 
4 5 6 
7 8  9 10
*/
    int count = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << count++ << " ";
        }
        cout << endl;
    }
    return 0;
}
