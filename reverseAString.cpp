#include <iostream>

using namespace std;

void reverse(char name[], int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}

int getlenght(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){
    char name[100];
    cout<<"Enter your name: ";
    name = getchar();
    cout<<endl;
    
    cout<<"Your name is: "<<name<<endl;
    
    int n = getlenght(name);
    
    cout<<"The lenght of your name is: "<<n<<endl;

    reverse(name,n);
    cout<<"The reversed name is: "<<name<<endl;
    return 0;
}
