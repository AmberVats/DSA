#include<bits/stdc++.h>

using namespace std;

int secondSmallest(int arr[],int n){
    if(n<2){
        return -1;
    }
    int small = INT_MAX;
    int second_small = INT_MAX;
    int i;
    for(i = 0; i < n; i++) {
       if(arr[i] < small){
          second_small = small;
          small = arr[i];
       }
       else if(arr[i] < second_small && arr[i] != small){
          second_small = arr[i];
       }
    }
   return second_small;     
}

int secondLargest(int arr[],int n){
	if(n<2)
	return -1;
    int large=INT_MIN,second_large=INT_MIN;
    int i;
    for (i = 0; i < n; i++) 
    {
        if (arr[i] > large) 
        {
            second_large = large;
            large = arr[i];
        }
 
        else if (arr[i] > second_large && arr[i] != large) 
        {
            second_large = arr[i];
        }
    }
    return second_large;                
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << endl;

    int arr[n];
    cout << "Enter the elements in the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << endl;


    int S=secondSmallest(arr,n);
    int L=secondLargest(arr,n);
    cout<<"Second smallest is "<<S<<endl;
    cout<<"Second largest is "<<L<<endl;
    return 0;
}


