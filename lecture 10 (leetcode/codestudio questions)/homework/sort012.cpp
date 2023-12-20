#include <bits/stdc++.h> 
void sort012(int *arr, int n){
   //   approach 1
//    int zeros = 0;
//    int ones = 0;
//    int twos = n - 1;
//    while(zeros <= twos){
//        if(arr[zeros] == 0){
//            swap(arr[zeros], arr[ones]);
//            zeros++;
//            ones++;
//        }
//        else if(arr[zeros] == 1){
//            zeros++;
//        }
//        else{
//            swap(arr[zeros], arr[twos]);
//            twos--;
//        }
//    }
    //approach 2
    int zeros = 0;
    int ones = 0;
    int twos = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            zeros++;
        }
        else if(arr[i] == 1){
            ones++;
        }
        else{
            twos++;
        }
    }
    for(int i = 0; i < zeros; i++){
        arr[zeros] = 0;
    }
    for(int i = zeros; i < (ones+zeros); i++){
        arr[ones] = 1;
    }
    for(int i = (zeros + ones); i < n; i++ ){
        arr[twos] = 2;
    }
}