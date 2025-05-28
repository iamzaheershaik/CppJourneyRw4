#include<iostream>
using namespace std;

int main() {
    int arr[5];
    for (int i=0; i<5; i++) {
        cin>>arr[i];
    }
    cout<<"The Array of Elements"<<endl;
    for (int i=0; i<5; i++) {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
