#include <iostream>

using namespace std;

bool issorted(int *arr, int size){
    
    if(size == 0 || size == 1){
        return true;
    }
    
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remaingpart = issorted(arr+1, size-1);
        return remaingpart;
    }
}

int main(){
    
    int size;    
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];
    
    cout<<endl;
    
    cout<<"Enter the elements in the Array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl;
    
    bool ans = issorted(arr,size);
    
    if(ans){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;;
    }
    
    return 0;
}
