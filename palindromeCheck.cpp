#include<iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j){
    if(i>j){
        return true;
    }

    if(str[i] != str[j]){
        return false;
    }
    else{
        return checkPalindrome(str, i+1, j-1);
    }
}

int main(){

    string name;
    cout<<"Enter the word to checl palindrome: ";
    cin>>name;
    cout<<endl;

    bool isPalindrome = checkPalindrome(name, 0, name.length()-1);

    if(isPalindrome){
        cout<<"The string is a Palindrome";
    }
    else{
        cout<<"The string is not a Palindrome";
    }

    return 0;
}