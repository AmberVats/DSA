#include <iostream>

using namespace std;

bool isSorted(int *arr, int n){
    for(int i = 1; i < n; i++){
        if (arr[i] < arr[i - 1])
        return false;
    }
    return true;
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << endl;

    int arr[n];
    cout <<" Enter the elements in the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << endl;

    if(isSorted(arr,n)){
        cout << "The array is sorted";
    }
    else{
        cout << "The array is not sorted";
    }

    return 0;
}