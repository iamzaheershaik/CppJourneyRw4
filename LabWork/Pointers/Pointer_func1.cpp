#include <iostream>
using namespace std;
int* getAddress() {
    int num = 1000;
    return &num;
}
int main() {
    int* ptr;
    ptr = getAddress();
    cout << "Address of the variable: " << ptr<<endl;
    return 0;
}