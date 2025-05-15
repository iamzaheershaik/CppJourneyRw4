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
    sum=0;
    for(int i=0;i<n;i++) {
        sum+=a[i];
    }
    cout<<"Sum of array is: "<<sum;
}