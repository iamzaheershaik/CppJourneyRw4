#include<iostream>
using namespace std;

class calculater {
public:
    void add(int A, int B, int C=0) {
        if (C==0) {
            cout<<"The Sum of Two Int Numbers = "<<A+B+C<<endl;
        }else {
            cout<<"The Sum of Three Int Numbers = "<<A+B+C<<endl;
        }
    }
    void add(float A, float B, float C=0) {
        if (C==0) {
            cout<<"The Sum of Two Int Numbers = "<<A+B+C<<endl;
        }else {
            cout<<"The Sum of Three Int Numbers = "<<A+B+C<<endl;
        }
    }
};
int main() {
    calculater cal;
    cal.add(10,5);
    cal.add(20,5070,80);
    cal.add(90.56F,89.09F);
    cal.add(56.90F, 67.89F,556.78F);
}