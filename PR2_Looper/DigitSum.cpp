#include <iostream>
using namespace std;

int main() {
    int number, firstDigit, lastDigit, sum;
    cout << "Enter a number: ";
    cin >> number;
    lastDigit = number % 10;
    while (number >= 10) {
        number = number / 10;
    }
    firstDigit = number;
    sum = firstDigit + lastDigit;
    cout << "Sum of the first and last digit: " << sum << endl;
    return 0;
}