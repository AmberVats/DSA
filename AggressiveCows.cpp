#include <bits/stdc++.h>

using namespace std;

bool CanPlace(int *arr, int n, int k, int mid){

    int cntCows = 1; 
    int last = arr[0]; 
    for (int i = 1; i < n; i++) {
        if (arr[i] - last >= mid) {
            cntCows++; 
            last = arr[i]; 
        }
        if (cntCows >= k) return true;
    }
    return false;
}

int AgressiveCows(int *arr, int n, int k){
    sort(arr, arr + n);
    int low = 1; 
    int high = arr[n - 1] - arr[0];

    while (low <= high){
        int mid = (low + high)/2;
        if(CanPlace(arr,n,k,mid) == true){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return high;
}

int main(){
    int n = 6;
    int stalls[n] = {0, 3, 4, 7, 10, 9};
    int k = 4;
    int ans = AgressiveCows(stalls, n, k);
    cout << "The maximum distance is: " << ans << endl;
    return 0;
}