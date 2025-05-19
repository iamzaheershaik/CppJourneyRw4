#include <iostream>
using namespace std;

int main() {
    int i, n=5, ar[50] ={10, 20 , 30 , 40 , 50};
    int index = 3, value=112;
    ar[index]=value;
    for (i=0; i<n; i++) {
        cout << ar[i] << "  ";
    }
}
