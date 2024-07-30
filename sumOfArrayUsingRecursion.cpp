#include <iostream>
using namespace std;

int calsum(int *arr, int size){
    if(size == 0){
        return 0;
    }
    
    if(size == 1){
        return arr[0];
    }
    
    int remaning = 0;
    int sum = arr[0] + calsum(arr + 1, size - 1);
    return sum;
}

int main(){
    int size;
    
    cout <<"Enter the size of array: ";
    cin >> size;
    cout<< endl;
    
    int arr[size];
    
    cout <<"Enter the elements in the array: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    cout << endl;
    
    int ans = calsum(arr, size);
    
    cout <<"The sum of the array is: " << ans << endl;
    
    return 0;
}