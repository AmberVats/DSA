#include <iostream>

using namespace std;

void MoveZeros(int arr[],int n){
    int j = -1;
    for(int i = 0; i<n; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }

    if(j == -1){
        return;
    }

    for(int i = j+1; i < n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
    
}

int main(){
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

    MoveZeros(arr,n);

    cout << "Zeros are moved towards right : ";

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}