#include<iostream>
using namespace std;
class calculater {
public:
    void add(int A, int B, int C=0){
        if (C==0) {
            cout<<"The sum of Two Numbers int a+b = "<<A+B+C<<endl;
        }else {
            cout<<"The sum of Three Numbers int a+b+c = "<<A+B+C<<endl;
        }
    }
    void add(float A, float B, float C=0) {
        if (C==0) {
            cout<<"The sum of Two Numbers int a+b = "<<A+B+C<<endl;
        }else {
            cout<<"The sum of Three Numbers int a+b+c = "<<A+B+C<<endl;
        }
    }
};
int main() {
    calculater sum;
    sum.add(10,5);
    sum.add(30,40,50);
    sum.add(30.5F,60.56F);
    sum.add(70.45F,67.34F,78.90F);
}
