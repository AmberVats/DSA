#include <iostream>

using namespace std;

int FindMax(int v[], int n){
    int max = v[0];
    for(int i = 1; i < n; i++){
        if(v[i] > max){
            max = v[i];
        }
    }
    return max;
}

int main(){
    int n = 5;
    int a[n] = {2, 7, 1, 77, 21};
    int max = FindMax(a,n);
    cout << max;
    return 0;
}
