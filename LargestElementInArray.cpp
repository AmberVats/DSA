#include <iostream>

using namespace std;

int largestElement(int *arr, int n){
    int max = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main(){

    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    cout << endl;

    int arr[n];
    cout << "Enter the elements in the array : ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << endl;

    int Largest = largestElement(arr,n);

    cout << "The largest element in the given array is: " << Largest << endl;

    return 0;

}