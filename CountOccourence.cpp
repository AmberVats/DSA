#include <iostream>

using namespace std;

int count(int *arr, int n, int x){
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    
    int n;
    int arr[n];
    int x;

    cout<<"Enter the size of array: ";
    cin>>n;

    cout<<"Enter the element in the array: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout<<"Enter the element to check the occourence: ";
    cin>>x;

    int ans = count(arr,n,x);

    cout<<"The number "<<x<<" has occoured this much time: "<<ans<<endl;

    return 0;
}