#include <iostream>

using namespace std;

int funn(int mid, int n, int m){
    
}
int Sqrt(int n){
    int low = 1;
    int high = n;

    while(low <= high){
        int mid = (low+high)/2;
        int square = mid*mid;

        if(square <= n){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return high;
}

int main(){
    int n = 28;
    int ans = Sqrt(n);
    cout << "The floor of square root of " << n
         << " is: " << ans << endl;
    return 0;
}