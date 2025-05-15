#include <iostream>
using namespace std;

int main() {
    int  i, n;
    cout<<"size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements :";
    for(i=0; i<n; i++) {
        cin>>arr[i];
    }
    cout<<"Even numbers are :";
    for(i=0; i<n; i++) {
        if(arr[i]%2==0) {
            cout<<arr[i]<<" ";
        }
    }

}


