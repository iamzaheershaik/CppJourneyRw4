#include<iostream>
using namespace std;

int main() {
    int a[5] ={190,89,8,99,5};
    int min= a[0];
    for (int i=1; i<5; i++) {
        if (a[i]<min){
          min = a[i];
        }
    }
    cout<<"min value in the given array is the "<<min<<endl;
}
