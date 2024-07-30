#include<iostream>
using namespace std;

class hero{

    private:
    int health;

    public:     
    char level;

    hero(int X, char Y){
        health = X;
        level = Y;
    }

    void print(){
        cout<<level<<endl;
    }

    int gethealth(){ 
        return health; 
    }

    char getleavel(){
        return level;
    }

    void sethealth(int h){
        health = h;
    }

    void setlevel(char ch){
        level = ch;
    }
};

int main(){

    hero amber;
    amber.sethealth(100);
    amber.setlevel('C');


    // hero a;
    // a.sethealth(1);
    // a.setlevel('A');
    // cout << "Health of a is: " << a.gethealth() << endl;
    // cout << "level of a is: " << a.level << endl;

    // hero *b = new hero;
    // b->sethealth(2);
    // b->setlevel('B');
    // cout << "Level of b is: " << b->level << endl;
    // cout << "Health of b is: " << b->gethealth() << endl;

    // hero amber;
    // cout<<"Amber health: " << amber.gethealth() << endl;
    // amber.sethealth(1000);

    // cout << "health is: " << amber.gethealth() << endl;
    return 0;
}