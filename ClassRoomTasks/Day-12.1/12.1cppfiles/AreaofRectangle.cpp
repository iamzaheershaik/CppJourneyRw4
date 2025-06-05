#include<iostream>
using namespace std;
int Area(int x, int y) {
    int z;
    cout<<"Enter the Length"<<endl;
    cin>>x;
    cout<<"Enter the breadth"<<endl;
    cin>>y;
    z = x*y;
    return z;
}
int main() {
    int length, breadth, RecArea;
    RecArea = Area(length,breadth);
    cout<<"Area of Rectangle "<<RecArea<<endl;
    return 0;

}
