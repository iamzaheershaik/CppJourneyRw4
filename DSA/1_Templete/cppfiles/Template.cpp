#include<iostream>
using namespace std;
//function Template;

template <typename T>
T add(T a, T b){
   return a+b;
}

int main() {
    cout <<"sum of two numbers  = "<< add<int>(5,6)<<endl;
    cout<<"sum of two float numbers ="<<add<float>(3.14F, 45.89)<<endl;
    cout<<"sum of two float numbers ="<<add<double>(45.7898,45.7890345)<<endl;
}
