#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for(int i = 1; i < n; i++) { //start 1 index se krna ae 0 se nai
        bool swapped = false;
        for(int j = 0; j < n-i; j++)  {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false) {
            break;
        }
    }
}

