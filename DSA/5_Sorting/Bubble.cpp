#include<iostream>
using namespace std;

int main() {
    int *p, n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    p = new int[n];
    cout<<"Enter the elements in array"<<endl;
    for (int i=0; i<n; i++) {
        cin>>p[i];
    }
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-i-1; j++) {
            if (p[j]>p[j+1]) {
                int temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }
    for (int i=0; i<n; i++) {
        cout<<p[i]<<endl;
    }
}