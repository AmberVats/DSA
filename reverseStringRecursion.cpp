#include<iostream>

using namespace std;

void reverse(string& str, int i, int j ){
    if(i>j){
        return;
    }

    swap(str[i], str[j]);
    i++;
    j--;

    reverse(str,i,j);
}

int main(){

    string name;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<endl;

    reverse(name, 0, name.length()-1);

    cout<<"The reversed string is " << name << endl;

    return 0;
}