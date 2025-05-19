#include <iostream>
using namespace std;

int main() {
    int i, n=5, ar[50] ={10, 20 , 30 , 40 , 50};
    int index =3;

    for (i=index; i<n-1; i++) {
        ar[i]=ar[i+1];
    }
    n--;
    cout << "\n print New Array : ";
    for (i=0; i<n; i++) {
        cout << ar[i] << "  ";
    }
}
