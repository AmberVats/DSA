#include <iostream>

using namespace std;

int funn(int mid, int n, int m){
    long long ans = 1;
    for (int i = 1; i <= n; i++) {
        ans = ans * mid;
        if (ans > m) return 2;
    }
    if (ans == m) return 1;
    return 0;
}

int NthRoot(int n, int m){
    int low = 1;
    int high = n;

    while (low <= high){
        int mid = (low + high)/2;
        int midn = funn(mid, n, m);
        if (midn == 1) {
            return mid;
        }
        else if (midn == 0) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main(){
    int n = 3, m = 27;
    int ans = NthRoot(n, m);
    cout << "The answer is: " << ans << "\n";
    return 0;
}