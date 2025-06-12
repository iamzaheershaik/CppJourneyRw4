#include<iostream>
using namespace std;
int main() {
    int arr[7];
    cout<<"Enter the Elements of Array"<<endl;
    for (int i=0; i<7; i++) {
        cin>>arr[i];
    }
    cout<<"Entered Elemets of The Array"<<endl;
    for (int i=0; i<7; i++){
        cout<<arr[i]<<endl;
    }
}