#include <iostream>
using namespace std;
int main() {
    int arr[] = {5, 6, 7, 8, 9, 10}, count = 0;
    for (int i = 0; i < 6; i++) {
        if (arr[i] % 2 != 0)
            count++;

    }
    cout << "Total odd numbers = " << count;
    return 0;
}