#include<iostream>

using namespace std;

void sortArray(int arr[], int size){
    
    if(size == 0 || size == 1){
        return;
    }

    for(int i = 0; i<size; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    sortArray(arr,size-1);
}

int main(){

    int size;
    int arr[size];
    
    cout<<"Enter the size of array: ";
    cin>>size;
    cout<<endl;

    cout<<"Enter the values in th array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }cout<<endl;

    cout<<"The array is: ";
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    cout<<"The sorted array is: ";

    sortArray(arr,5);
    
    for(int i=0; i<5; i++) {
        cout << arr[i] << " ";
    }cout << endl;

    return 0;
}