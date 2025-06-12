#include<iostream>
using namespace std;
int main() {
    int A[7] = {4,6,7,8,3,9,10};
    int max = A[0];
    for (int i=1; i<7; i++) {
        if (A[i] > max){
            max = A[i];
        }
    }
    cout<<"max value = "<<max<<endl;
}
