#include <iostream>
#include <string>

using namespace std;

string RemoveOuttermostParameters(const string& s){
    string result;
    int count = 0;

    for(char ch : s){
        if(ch == '('){
            if(count > 0){
                result += ch;
            }
            count++;
        }else if(ch == ')'){
            count--;
            if(count > 0){
                result += ch;
            }
        }
        
    }
    return result;
}

int main(){
    string s = "(()()())(())(()()())(())";
    string result = RemoveOuttermostParameters(s);
    cout << result << endl;
    return 0;
}