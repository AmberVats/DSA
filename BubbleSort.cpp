#include <iostream>
using namespace std;

void BubbleSort(int * arr, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout << "After Bubble sort ";
    for(int i = 0; i<n; i++){
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

    BubbleSort(arr,5);

    return 0;
}