#include <iostream>
using namespace std;
int main() {
    int arr[] = {5, 6, 7, 8, 9, 10, 12}, count = 0;
    for (int i = 0; i < 7; i++) {
        if (arr[i] % 2==0)
            count++;

    }
    cout << "Total Even  numbers = " << count;
    return 0;
}