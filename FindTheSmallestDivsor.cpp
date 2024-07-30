#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int sum(int *arr, int n, int num){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = (arr[i]/num + sum);
        sum += ceil((double)(arr[i]) / (double)(num));
    }
    return sum;
}

int SmallestDivisor(int *arr, int n, int limit){

    if(n > limit){
        return -1;
    }

    int low = 1;
    int high = *max_element(arr, arr+n);

    while(low <= high){
        int mid = (low+high)/2;
        if(sum(arr,n,mid) <= limit){
            high = mid - 1;
        }
        else{
            low = mid +1;
        }
    }
    return low;
}

int main(){
    int arr[4] = {1,2,5,9};
    int limit = 6;
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = SmallestDivisor(arr,n,limit);

    cout <<"The Smallest divisor for the give array is "<<ans<<endl;

    return 0;
}