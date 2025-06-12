#include<iostream>
using namespace std;
class calculater {
public:
        void add( int a, int b, int c=0 ) {
                if (c==0) {
                        cout<<"The Sum of Two Numbers = "<<a+b+c<<endl;
                }else {
                        cout<<"The Sum of Three Numbers = "<<a+b+c<<endl;
                }
        }
        void add(float a, float b, float c=0) {
                if (c==0) {
                        cout<<"The Sum of Two Float Numbers = "<<a+b+c<<endl;
                }else {
                        cout<<"The Sum of Three Float  Numbers = "<<a+b+c<<endl;
                }
        }
};
int main() {
        calculater c;
        c.add(10,5);
        c.add(20, 30, 40);
        c.add(20.5F,40.6F);
        c.add(199.5F,200.5F,100.6F);
}