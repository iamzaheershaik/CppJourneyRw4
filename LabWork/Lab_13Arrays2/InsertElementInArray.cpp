#include <iostream>
using namespace std;

int main() {
    int i, n=5, ar[50] ={10, 20 , 30 , 40 , 50};
    int index =2, value =25;
    for (i=n-1; i>=index; i--) {
        ar[i+1] = ar[i];
    }
    ar[index] = value;
    n++;
    cout << " \n print New Array : ";
    for (i=0; i<n; i++) {
        cout << ar[i] << "  ";
    }
}