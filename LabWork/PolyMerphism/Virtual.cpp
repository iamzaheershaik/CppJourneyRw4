#include<iostream>
using namespace std;
class BasicCar {
public:
    virtual void Car() {
        cout<<"This is BasicCar"<<endl;
    }
};
class AdvanceCar:public BasicCar {
public:
    void Car() {
        cout<<"This is Advanace Car"<<endl;
    }
};

int main() {
    BasicCar *P = new AdvanceCar();
    P->Car();
}
