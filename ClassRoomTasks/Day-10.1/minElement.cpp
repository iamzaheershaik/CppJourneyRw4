#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 43, 55, 22, 45, 66, 88, 1234 },  min=arr[0];
    for (int i=1; i<9; i++){
        if (arr[i] < min){
            min = arr[i];
        }
        cout << "Minimum number = " << min;
        return 0;
    }
}