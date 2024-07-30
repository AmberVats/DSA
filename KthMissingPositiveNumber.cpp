#include <iostream>

using namespace std;

int KthMissingNumber(int *arr, int n, int k){
    int low = 0;
    int high = n - 1;
    while (low <= high){
        int mid = (low +high)/2;
        int missing = arr[mid] - (mid + 1);
        if(missing < k){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return k + high + 1;
}

int main(){
    int n = 4; 
    int arr[n] = {4, 7, 9, 10};
    int k = 4;
    int ans = KthMissingNumber(arr,n,k);
    cout << "The Kth MISSING Positive number is : " << ans << endl;
    return 0;
}