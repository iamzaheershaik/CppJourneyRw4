#include <iostream>
using namespace std;
int main() {
    int arr[] = {3, 9, 1, 7, 2}, max = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max)
            max = arr[i];

    }
    cout << "Maximum number = " << max;
    return 0;
}