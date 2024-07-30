#include <iostream>

using namespace std;

int SingleElement(int *arr, int n) {
    if (n == 0) {
        return -1;
    }
    if (n == 1) {
        return arr[0];
    }
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            if (arr[i] != arr[i + 1]) {
                return arr[i];
            }
        } else if (i == n - 1) {
            if (arr[i] != arr[i - 1]) {
                return arr[i];
            }
        } else {
            if (arr[i] != arr[i + 1] && arr[i] != arr[i - 1]) {
                return arr[i];
            }
        }
    }
    return -1;
}

int main(){
    int n1 = 0;
    int n2 = 1;
    int n3 = 5;

    int arr1[n1]={};
    int arr2[n2]={1};
    int arr3[n3]={1,2,2,3,3};
    int arr4[n3]={1,1,2,3,3};
    int arr5[n3]={1,1,2,2,3};

    int ans1,ans2,ans3,ans4,ans5;

    ans1 = SingleElement(arr1,n1);
    ans2 = SingleElement(arr2,n2);
    ans3 = SingleElement(arr3,n3);
    ans4 = SingleElement(arr4,n3);
    ans5 = SingleElement(arr5,n3);

    cout<<ans1<<endl;
    cout<<ans2<<endl;
    cout<<ans3<<endl;
    cout<<ans4<<endl;
    cout<<ans5<<endl;

    return 0;
}