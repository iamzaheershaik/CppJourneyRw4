#include <iostream>
using namespace std;
template <typename T>
void printTwice(T value = T()) {
    cout << value << " " << value << endl;
}
int main() {
    printTwice(42);            // Output: 42 42
    printTwice<string>("Hi");  // Output: Hi Hi
    return 0;
}


