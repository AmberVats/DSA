#include <iostream>

using namespace std;

int main(){
    int x = 2;
    int* y = &x;
    cout << y << endl;
    cout << x;
    return 0;
}