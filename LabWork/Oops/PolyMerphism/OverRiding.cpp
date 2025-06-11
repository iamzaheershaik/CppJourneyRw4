#include<iostream>
using namespace std;

class Parent {
public:
    void display() {
        cout<<"I am a Parent"<<endl;
    }
};
class child:public Parent {
public:
    void display() {
        cout<<"I am Son of Parent"<<endl;
    }
};
int main() {
    Parent P;
    P.display();
    child c;
    c.display();
}