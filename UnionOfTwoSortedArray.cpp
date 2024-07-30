#include <iostream>

using namespace std;

int main(){
    int n = 5;
    int m = 5;
    int arr1[n] = {1,2,3,4,5};
    int arr2[m] = {1,6,7,8,9};

    int union[n+m] = MakeUnion(n,m,arr1,arr2);

    for(int i = 0; i < (n+m); i++){
        
    }
}