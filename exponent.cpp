#include<iostream>

using namespace std;

int power(int a, int b){
    
    if(b == 0){
        return 1;
    }
    if(b == 1){
        return a;
    }

    int ans = (power(a,b/2));
    if(b%2 == 0){
        //even
        return ans * ans;
    }
    else{
        //odd
        return a * ans * ans;
    }
    
}

int main(){

    int a,b;
    
    cout<<"Enter the number: ";
    cin>>a;
    cout<<endl;
    
    cout<<"Enter the power: ";
    cin>>b;
    cout<<endl;

    int ans = power(a,b);

    cout<<"The answer is "<<ans;
    return 0;
}