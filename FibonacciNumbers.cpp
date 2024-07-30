#include <iostream>

using namespace std;

int num(int n){
    if(n == 0){
        return 0;
    }

    if(n == 1){
        return 1;
    }

    int ans = num(n-1) + num(n-2);

    return ans;

}

int main(){

    int n;

    cout<<"Enter the number for fibonacci series: ";
    cin>>n;
    cout<<endl;

    int ans = num(n);
    cout<<ans<<endl;

    return 0;
}