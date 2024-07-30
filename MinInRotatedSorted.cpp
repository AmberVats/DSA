#include <iostream>
#include <climits>
#include <vector>

using namespace std;

int findmin(vector<int>& arr){
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int ans = INT_MAX;

    while (low <= high){
        int mid = (low+high)/2;

        if(arr[low] <= arr[mid]){

            ans = min(ans, arr[low]);
            low = mid+1;
        }
        else{
            ans = min(ans, arr[mid]);
            high = mid-1;
        }
    }
    
    return ans;
}
int main(){

    int n;
    vector<int> arr(n);  
    
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<endl;

    cout<<"Enter the elements in the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;

    int ans = findmin(arr);

    cout<<"The minnimum element in the rotated sorted array is: "<<ans<<endl;

    return 0;
}