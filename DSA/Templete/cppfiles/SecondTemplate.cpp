#include<iostream>
using namespace std;
template <class T>
class Box {
    public:
    T value;
    void setValue(T v) {
        value = v;
    }
    T getValue() {
        return value;
    }
};
int main() {
    Box <int> b;
    b.setValue(5);
    cout<<"The Value of Int "<<b.getValue()<<endl;
    Box <string> b1;
    b1.setValue("mohammed zaheer");
    cout<<"The Value of Int "<<b1.getValue()<<endl;
}