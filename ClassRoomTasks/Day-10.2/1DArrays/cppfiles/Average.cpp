#include<iostream>
using namespace std;

int main() {
    int arr[7] = { 1, 2, 3, 44, 55, 56, 25};
    int sum=0;
    for (int i=0; i<7; i++) {
        sum+=arr[i];
    }
    cout<<"The Sum of Elements in Array = "<<sum<<endl;

    float avg;
    avg = sum/7.0;
    cout<<"The average of the given elements of array = "<<avg<<endl;
}

