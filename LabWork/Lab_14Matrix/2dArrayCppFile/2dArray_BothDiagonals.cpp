#include <iostream>
using namespace std;

int main() {
    int i, j, row, col;
    cout<<"Enter the No of Rows in Matrix = ";
    cin>>row;
    cout<<"Enter the No of cols in Matrix = ";
    cin>>col;
    int arr[row][col];
    for (i=0; i<row; i++) {
        for (j=0; j<col; j++){
            cout<<"arr"<<"["<<i<<"]"<<"["<<j<<"]  = ";
            cin>>arr[i][j];
        }
    }
    cout<<"The Constructed Matrix"<<endl;
    for (i=0; i<row; i++) {
        for (j=0; j<col; j++){
            if (i==j) {
                cout<<arr[i][j]<<" ";
            }
            else if (i+j==row-1) {
                cout<<arr[i][j]<<" ";
            }
            else {
                cout<<"   ";
            }

        }
        cout<<endl;
    }
}
