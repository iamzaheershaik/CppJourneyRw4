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

    cout << "The Constructed Matrix:"<<endl;
    for ( i = 0; i < row; i++) {
        for ( j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout<<"Sum of Row"<<endl;
    for ( i = 0; i < row; i++) {
        int rowSum =0;
        for ( j = 0; j < col; j++) {
            rowSum+= arr[i][j];
        }
        cout<<" Sum of Row "<<i<<"="<<rowSum<<endl;
    }

    cout<<" Sum of col "<<endl;
    for ( j = 0; j < col; j++) {
        int colSum =0;
        for ( i = 0; i < row; i++) {
            colSum+= arr[i][j];
        }
        cout<<" Sum of col "<<j<<"="<<colSum<<endl;
    }

}
/*
Enter the No of Rows in Matrix =2
 Enter the No of cols in Matrix =2
 arr[0][0]  =1
 arr[0][1]  =2
 arr[1][0]  =3
 arr[1][1]  =4
 Th
e Constructed Matrix:
1 2
3 4
Sum of Row
 Sum of Row 0=3
 Sum of Row 1=7
 Sum of col
 Sum of col 0=4
 Sum of col 1=6

Process finished with exit code 0

 */