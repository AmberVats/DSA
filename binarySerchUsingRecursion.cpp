#include<iostream>

using namespace std;

bool binaryserch(int *arr, int s, int e, int k){

    int mid = (s+e)/2;

    if(s>e){
        return false;
    }
    if(arr[mid]==k){
        return true;
    }

    if(arr[mid]<k){
        return binaryserch(arr,mid+1,e,k);
    }
    else{
        return binaryserch(arr,s,mid-1,k);
    }
}

int main(){

    int size;
    int arr[size];
    int key;

    cout<<"Enter the size of array: ";
    cin>>size;
    cout<<endl;

    cout<<"Enter the values in the array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }cout<<endl;

    cout<<"Enter the key you want to serch: ";
    cin>>key;
    cout<<endl;
    
    bool ans = binaryserch(arr,0,size,key);
    
    if(ans){
        cout<< key <<" Is pesent in the array";
    }
    else{
        cout<<key <<" Is not present in the array";
    }

    return 0;
}