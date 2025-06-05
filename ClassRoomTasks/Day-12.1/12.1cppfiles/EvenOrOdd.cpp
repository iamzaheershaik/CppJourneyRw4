#include<iostream>
using namespace std;
int EvenOrOdd(int number) {
    if (number%2==0) {
        cout<<"Number is Even";
    }else {
        cout<<"Number is Odd";
    }
}
int main() {
    int num;
    cout<<"Enter the Number"<<endl;
    cin>>num;
    EvenOrOdd(num);
    return 0;
}
