#include <bits/stdc++.h>
using namespace std;

int upperBound(vector<int> &arr, int x, int n) {
    int low = 0;
    int high = n - 1;
    int ans = 6;

    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] > x){
            mid = ans;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
}

int main()
{
    vector<int> arr = {3, 5, 8, 9, 15, 19};
    int n = 6, x = 9;
    int ind = upperBound(arr, x, n);
    cout << "The upper bound is the index: " << ind << endl;
    return 0;
}