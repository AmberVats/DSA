#include <bits/stdc++.h>

using namespace std;

int CountPages(int *arr, int n, int pages){
    int students = 1;
    int pagesstudents = 0;
    for(int i = 0; i < n; i++){
        if(pagesstudents + arr[i] <= pages){
            pagesstudents = pagesstudents + arr[i];
        }
        else{
            students++;
            pagesstudents = arr[i];
        }
    }
    return students;
}

int MaxElement(int *arr, int n){
    int max = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int Sum(int *arr, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int FindPages(int *arr, int n, int m){
    if(m > n){
        return -1;
    }

    int low = MaxElement(arr,n);
    int high = Sum(arr,n);

    for(int pages = low; low <= high; pages++){
        if(CountPages(arr,n,pages) == m){
            return pages;
        }
    }
    return low;

}

int main(){
    int n = 5;
    int books[n] = {25, 46, 28, 49, 24};
    int m = 4;
    int ans = FindPages(books,n,m);
    cout <<"The answer from linear serch arproch is : " << ans << endl;
    return 0;
}
