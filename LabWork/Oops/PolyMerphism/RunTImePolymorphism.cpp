#include<iostream>
using namespace std;

class Laptop {
public:
    virtual void PowerOn()=0;
    virtual void PowerOff()=0;

};
class LinuxMint_Os:public Laptop {
public:
    void PowerOn(){
        cout<<"This is Linux Mint"<<endl;
    }
    void PowerOff() {
        cout<<"Mint is Going PowerOff"<<endl;
    }
};
class Apple_MacOs:public Laptop {
public:
    void PowerOn(){
        cout<<"This is Mac"<<endl;
    }
    void PowerOff() {
        cout<<"Mac is Going PowerOff"<<endl;
    }
};

int main() {
    Laptop *ptr = new LinuxMint_Os();
    ptr->PowerOn();
    ptr->PowerOff();
    ptr = new Apple_MacOs();
    ptr->PowerOn();
    ptr->PowerOff();
}