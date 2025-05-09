#include <iostream>
using namespace std;

int main() {
    int number, count = 0;
    cout << "Enter a number: ";
    cin >> number;
    if (number == 0) {
        count = 1;
    } else {
        if (number < 0)
            number = -number;

        while (number != 0) {
            number /= 10;
            count++;
        }
    }
    cout << "Total number of digits: " << count << endl;

    return 0;
}