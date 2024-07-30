#include <iostream>

using namespace std;

void reachHome(int start,int end){
    
    cout<<start<<endl;
    
    if(start == end){
        return ;
    }
    
    start++;
    reachHome(start,end);

}

int main(){
    
    int start;
    int end;

    cout<<"Enter the starting number: ";
    cin>>start;
    cout<<endl;

    cout<<"Enter the end number: ";
    cin>>end;
    cout<<endl;
    
    reachHome(start,end);
    
    return 0;
}