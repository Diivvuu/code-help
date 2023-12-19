#include <iostream>
using namespace std;
void printReverse(int arr[], int size){
    int  i = 0, j = size - 1;
    while(i < j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter the size of array : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array : " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    printReverse(arr, n);
}