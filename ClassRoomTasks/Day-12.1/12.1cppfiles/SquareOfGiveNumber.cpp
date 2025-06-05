#include<iostream>
using namespace std;
int Square(int A) {
    int Z;
    Z= A*A;
    return Z;
}
int main() {
    int x=25, Sq;
    Sq = Square(x);
    cout<<"Square of Give Number = "<< Sq<<endl;
}
