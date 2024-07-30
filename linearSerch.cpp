#include<iostream>

using namespace std;

bool linearsrech(int *arr, int n, int key){
    
    if(n == 0){
        return false;
    }

    if(arr[0] == 0){
        return true;
    }
    else{
        bool remaning = linearsrech(arr+1, n-1, key);
        return remaning;
    }
}

int main(){

    int n;
    int arr[n];
    int key;

    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<endl;

    cout<<"Enter the elements in the array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;

    cout<<"Enter element to serch: ";
    cin>>key;

    bool ans = linearsrech(arr, n, key);

    if(ans){
        cout<<"The element is present";
    }
    else{
        cout<<"Element is absent";
    }

    return 0;
}