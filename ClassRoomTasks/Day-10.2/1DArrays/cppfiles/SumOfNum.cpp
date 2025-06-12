#include<iostream>
using namespace std;
int main() {
    int A[7] = {1,22,4,6,7,8,9};
        int sum = 0;
        for (int i=0; i<7; i++) {
            sum=sum+A[i];
        }
    cout<<"sum of all Elements in array = "<<sum<<endl;
}

