#include<iostream>
using namespace std;

int main() {
    int P_ve[5] = { 1, 2,3, 55,-9};
    int count=0;
        for (int x:P_ve) {
            if (x>0) {
                count++;
            }
        }
        cout<<"The No of Postive Numbers in the Given Array = "<<count<<endl;

    }


