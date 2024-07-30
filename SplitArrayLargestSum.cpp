#include <bits/stdc++.h>

using namespace std;

int MaxElement(int *arr, int n){
    int max = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int Sum(int *arr, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum +arr[i];
    }
    return sum;
}

int countPartitions(int *arr, int n, int mid){
    int partitions = 1;
    long long subarraySum = 0;
    for (int i = 0; i < n; i++) {
        if (subarraySum + arr[i] <= mid) {
            //insert element to current subarray
            subarraySum += arr[i];
        }
        else {
            //insert element to next subarray
            partitions++;
            subarraySum = arr[i];
        }
    }
    return partitions;
}

int LargestSubArray(int *arr, int n, int k){
    int low = MaxElement(arr,n);
    int high = Sum(arr,n);
    //Apply binary search:
    while (low <= high) {
        int mid = (low + high) / 2;
        int partitions = countPartitions(arr, n, mid);
        if (partitions > k) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return low;
}

int main(){
    int n = 4;
    int arr[n] = {10, 20, 30, 40};
    int k = 2;

    int ans = LargestSubArray(arr,n,k);
    cout << "The answer is : " << ans <<endl;
    return 0;
}