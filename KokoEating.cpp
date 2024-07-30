#include <bits/stdc++.h>

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

int TotalNumberOfHours(int v[], int n, int mid){
    int totalH = 0;
    for (int i = 0; i < n; i++) {
        totalH = totalH + ceil((double)(v[i]) / (double)(mid));
    }
    return totalH;
}

int MinumumRateToEarBananas(int v[], int n, int h){
    int low = 1;
    int high = FindMax(v, n);
    while(low <= high){
        int mid = (low + high)/2;
        int TotalHours = TotalNumberOfHours(v,n,mid);
        if(TotalHours <= h){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return low;
}

int main(){
    int n = 4;
    int v[n] = {7, 15, 6, 3}; // 2 + 3 + 2 + 1 = 8 for 4/h 2 + 4 + 2 + 1 = 9
    int h = 8;
    int ans = MinumumRateToEarBananas(v, n, h);
    cout << "Koko should eat atleast: " << ans <<" bananas." << endl;
    return 0;
}