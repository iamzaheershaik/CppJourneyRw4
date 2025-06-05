#include<iostream>
using namespace std;
int product(int a, int b) {
    int c;
    c=a*b;
    return c;
}
int main() {
    int x=15, y=2090, z;
    z = product(x, y);
    cout<<"The Product Value of X and Y = "<<z;
    return 0;
}