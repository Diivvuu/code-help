/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

/*
for n = 3 
1 2 3
4 5 6 
7 8 9
*/

int main()
{
    int n;
    cin >> n;
    int count = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << count++ << " ";
        }
        cout << endl;
    }
/*
for n = 3
9 8 7 
6 5 4 
3 2 1 
*/

    int count1 = n*n;
    for(int i = 0; i < n; i++){
        for(int j = 0;j < n; j++){
            cout << count1-- << " ";
        }
        cout << endl;
        
    }
    return 0;
}
