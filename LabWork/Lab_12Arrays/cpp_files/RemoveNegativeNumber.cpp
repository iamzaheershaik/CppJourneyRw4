#include <iostream>
using namespace std;

int main() {
    int n, sum;
    cout<<"size of Array :";
    cin>>n;
    int a[n];
    cout<<"Enter array elements :";
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    cout<<"the array elements are :";
    for(int i=0;i<n;i++) {
        if (a[i]>0) {
            cout<<a[i]<<" ";
        }else {

        }
    }
}
