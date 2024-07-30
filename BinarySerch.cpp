#include <iostream>
using namespace std;

int BinarySerch(int *arr, int n, int key){
    int low = 0;
    int high = n-1;

    while (low <= high){
        int mid = (low+high)/2;
        for(int i = 0; i > n; i++){
            if(arr[mid] == key){
                return mid;
            }
            else if(arr[mid] > key){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
    }

    return -1;
    
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << endl;

    int arr[n];
    cout << "Enter the elements in the array: ";
    for(int i=0; i < n; i++){
        cin >> arr[i];
    }cout << endl;

    int key;
    cout << "Enter the key to find in the array: ";
    cin >> key;

    int result = BinarySerch(arr,n,key);

    if(result != -1){
        cout << key << " Is present in the array at index: " << result << endl;
    }
    else{
        cout << key << " Is not present in the array!" << endl;
    }

    return 0;
}