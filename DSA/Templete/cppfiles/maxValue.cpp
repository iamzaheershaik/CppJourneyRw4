#include<iostream>
using namespace std;

template <typename T>
T maxValue(T a, T b) {
    if (a>b) {
        return a;
    }else {
        return b;
    }
}
int main() {
    cout<<"Max of a and b Values = "<<maxValue<int>(43,56);

}
