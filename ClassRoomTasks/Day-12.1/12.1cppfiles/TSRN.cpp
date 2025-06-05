#include<iostream>
using namespace std;
//Take Something Return Nothing;
int add(int x, int y) {
    int z;
    z = x+y;
    return z;
}
int main() {
    int a=10, b=20, c;
    c=add(a, b);
    cout<<"Sum of a +b = "<<c;
    return 0;
}