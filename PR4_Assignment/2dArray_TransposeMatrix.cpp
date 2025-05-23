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
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}
/*
Enter the No of Rows in Matrix =3
 Enter the No of cols in Matrix =3
 arr[0][0]  =1
 arr[0][1]  =2
 arr[0][2]  =3
 arr[1][0]  =4
 ar
r[1][1]  =5
 arr[1][2]  =6
 arr[2][0]  =7
 arr[2][1]  =8
 arr[2][2]  =9
 The Constructed Matrix
1 4 7
2 5 8
3 6 9
 */