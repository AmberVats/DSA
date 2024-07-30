#include <iostream>

using namespace std;

int MaxElement(int *arr, int n){
    int max = arr[0];
 
    for (int i = 1; i < n; i++){
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int SumOfWeights(int *arr, int n){
    int ans = 0;
    for(int i = 0; i<n; i++){
        ans = arr[i] + arr[i+1];
    }
    return ans;
}

int FindDays(int *arr, int n, int cap){
    int days = 1;
    int load = 0;

    for(int i = 0; i < n; i++){
        if (load + arr[i] > cap) {
            days += 1;
            load = arr[i];
        }
        else {
            load += arr[i];
        }
    }
    return days;
}

int Capacity(int *arr, int n, int d){
    int low = MaxElement(arr,n);
    int high = SumOfWeights(arr,n);
    while(low <= high){
        int mid = (low + high) / 2;
        int NumberOfDays = FindDays(arr,n,mid);
        if(NumberOfDays <= d){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return low;
}

int main(){
    int n = 5;
    int weights[n] = {1,2,3,1,1};
    int d = 5;
    int ans = Capacity(weights, n, d);
    cout<<"The minimum capacity should be: " << ans << endl;
    return 0;
}