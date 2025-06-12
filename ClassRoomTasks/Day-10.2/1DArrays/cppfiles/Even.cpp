#include<iostream>
using namespace std;

int main() {
    int EvenArray[5] = {10,223,37,44,5};
    int count;
    count =0;
    for (int i=0; i<5; i++) {
        if (EvenArray[i] % 2 == 0) {
            count++;
        }
    }
    cout<<"total Even Number in Array = "<<count<<endl;
}
