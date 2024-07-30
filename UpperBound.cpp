#include <iostream>
using namespace std;

int upperBound(int *arr, int n, int key){
    int mid;
    int low = 0;
    int high = n;
 
    while (low < high) {
        mid = low + (high - low) / 2;

        if (key >= arr[mid]) {
            low = mid + 1;
        }
        else {
            high = mid;
        }
    }
   
    if(low < n && arr[low] <= key) {
       low++;
    }
    return low;
}

int main(){
    int arr[] = {3, 5, 8, 8, 8, 15, 19};
    int n = 7;
    int key = 16;
    int upr = upperBound(arr, n, key);
    cout << "The Upper bound is the index: " << upr << "and the numer is : " << arr[upr] << endl;
    return 0;
}
