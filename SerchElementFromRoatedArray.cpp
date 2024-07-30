#include <iostream>

using namespace std;

int serch(int *arr, int n, int target){
    
    int low = 0;
    int high = n-1;

    while (low <= high){
        int mid = (low + high)/2;
        if (arr[mid] == target){
            return mid;
        }
        //left sorted
        if(arr[low] >= arr[mid]){
            if(arr[low] <= target && target <= arr[mid]){
                high = mid -1;
            }
            else{
                low = mid + 1;
            }                
        }

        //right sorted
        else{
            if(arr[mid] <= target && target <= arr[high]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main(){

    int n;
    int arr[n];
    int target;

    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<endl;

    cout<<"Enter the elements in the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;

    cout<<"Enter the target element to serch: ";
    cin>>target;
    cout<<endl;

    int ans;
    ans = serch(arr,n,target);

    cout<<"The Element is: "<< ans <<endl;

    return 0;
}