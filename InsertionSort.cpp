#include <iostream>
using namespace std;

void InsertionSort(int *arr,int n){
    for (int i = 0; i <= n - 1; i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }

    cout << "After Insertion Sort ";
    for(int i = 0; i < n; i++){
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

    InsertionSort(arr,5);

    return 0;
}