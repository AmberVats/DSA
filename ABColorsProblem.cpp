#include<iostream>

using namespace std;

bool ABProblem(string str){
    
    int n = str.size();
    int a = 0;
    int b = 0;

    for(int i = 1; i < n; i++){
        if(str[i-1] == 'A' && str[i] == 'A' && str[i+1] == 'A'){
            a++;
        }
        if(str[i-1] == 'B' && str[i] == 'B' && str[i+1] == 'B'){
            b++;
        }
    }  
    return a > b;
}

int main(){

    string x;
    cout << "Enter the values in the string: ";
    getline(cin, x);
    cout << endl;

    bool ans = ABProblem(x);

    if(ans){
        cout<<"its true";
    }
    else{
        cout<<"Its false";
    }

    return 0;
}