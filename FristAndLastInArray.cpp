#include <iostream>
#include <vector>

using namespace std;

int solve(int *arr, int n, int key) {
  int res = -1;
  for (int i = n - 1; i >= 0; i--) {
    if (arr[i] == key) {
      res = i;
      break;
    }
  }
  return res;
}

int main(){

    int n;
    int arr[n];
    int key;

    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<endl;

    cout<<"Enter the elements in array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the key: ";
    cin>>key;
    cout<<endl;
    
    cout << solve(arr,n,key);

    return 0;
}