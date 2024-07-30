#include<iostream>

using namespace std;

class human{

    protected:
    int height;
    int weight;

    private:
    int age;

    public:
    int getage(){
        return this -> age;
    }
    void setweight(int w){
        this -> weight = w;
    }
};

class male: public human{

    public:
    string colour;

    void sleep(){
        cout<<"male sleeping" << endl;
    }

    int getheight(){
        return this -> height;
    }
};

int main(){

    male m1;
    cout << m1.height << endl;

    // male object1;
    // cout << "Enter the age: ";
    // cin >> object1.age;
    // cout << "The age is: " << object1.age << endl;
    // cout << "Enter the weight: ";
    // cin >> object1.weight;
    // cout << "The weight is: " << object1.weight << endl;

    // object1.sleep();

    // object1.setweight(64);
    // cout << object1.weight << endl;

    cout << "Sab shai chal ra h" << endl;

    return 0;
}