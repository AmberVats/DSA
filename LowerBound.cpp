#include <iostream>
using namespace std;

int lowerBound(int *arr, int n, int key){
    for (int i = 0; i < n; i++) {
        if (arr[i] >= key){
            return i;
        }
    }
    return n;
}

int main(){
    int arr[] = {3, 5, 8, 15, 19};
    int n = 5;
    int key = 9;
    int ind = lowerBound(arr, n, key);
    cout << "The lower bound is the index: " << ind << endl;
    return 0;
}
