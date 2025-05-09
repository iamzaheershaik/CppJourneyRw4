#include <iostream>
using namespace std;

int main() {
    char letter = 'a';

    do {
        cout << letter << " ";
        letter += 4;
    } while (letter <= 'z');

    cout << endl;
    return 0;
}