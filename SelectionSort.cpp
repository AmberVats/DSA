#include <iostream>
using namespace std;


void SelectionSort(int *arr, int n){
    for(int i = 0; i < n - 1; i++){
        int minIndex = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }

    cout << "After selection sort: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){

    int arr[5] = {3,6,1,8,7};
    
    cout << "The unsorted array is: ";
    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;

    SelectionSort(arr,5);

    return 0;
}