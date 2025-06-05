#include <iostream>
using namespace std;
void printStarPattern() {
    for (int i = 0; i <3; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
int main() {
    printStarPattern();
    return 0;
}

