#include<iostream>
using namespace std;

int main() {
    string s = "Hello";
    cout<<"before AddingString"<<s.capacity()<<endl;
    s.append( " Universe My Name is Zaheer shaik How are You PEople");
    cout<<"After AddingString The Capacity= " <<s.capacity()<<" Length  = "<<s.length()<<endl;
    cout<<s;

}
