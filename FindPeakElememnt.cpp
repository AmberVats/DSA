#include <iostream>

using namespace std;

int FindPeakElement(int *arr,int n){
    if(n == 1) return 0;
    if(arr[0] > arr[1]) return 0;
    if(arr[n-1] > arr[n-2]) return n-1;

    int low = 1;
    int high = n-2;
    while(low <= high){
        int mid = (low + high)/2;

        //arr[mid] = peak
        if(arr[mid+1] < arr[mid] && arr[mid] > arr[mid-1]){
            return mid;
        }

        //peak is ata left part
        if(arr[mid] < arr[mid-1]){
            high = mid - 1;
        }

        else{
            low = mid +1;
        }
    }
    return -1;
}

int main(){
    int n = 10;
    int arr[n] = {1,2,3,4,5,6,7,8,5,4};
    int ans = FindPeakElement(arr,n);
    cout << "Peak element is: "<< ans << endl;

    return 0;
}