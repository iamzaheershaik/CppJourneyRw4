#include<iostream>
using namespace std;
int main() {
    int N_ve[5] = { 1, -2,3, 55,-9};
    int count=0;
    for (int x:N_ve) {
        if (x<0) {
            count++;
        }
    }
    cout<<"The No of Negative Numbers in the Given Array = "<<count<<endl;

}
