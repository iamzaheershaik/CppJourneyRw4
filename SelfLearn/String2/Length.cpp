#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    cout<<"Enter the Name "<<endl;
    getline(cin,str);
    cout<<str<<endl;
    cout<<"The Length of str= "<<str.length()<<endl;
    cout<<"The size of str= "<<str.size()<<endl;
    cout<<"The capacity of str= "<<str.capacity()<<endl;
    cout<<"The maxsize of str= "<<str.max_size()<<endl;
    str.resize(50);
    cout<<"The capacity after resize  of str= "<<str.capacity();
}
