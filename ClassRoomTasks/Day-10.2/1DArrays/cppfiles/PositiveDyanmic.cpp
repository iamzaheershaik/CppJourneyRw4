#include<iostream>
using namespace std;

int main() {
    int a[5];
    int count=0;
    cout<<"Enter the Numbers in Array"<<endl;
    for (int i=0; i<5; i++) {
        cin>>a[i];
    }
    for (int i=0; i<5; i++) {
        cout<<"The values of Array = "<<a[i]<<endl;
    }
    cout<<"Enter Elements of given Array"<<endl;
    for (auto x: a) {
       if (x>0) {
           count++;
       }
    }
    cout<<"Positive Numbers in Array = "<<count<<endl;
}