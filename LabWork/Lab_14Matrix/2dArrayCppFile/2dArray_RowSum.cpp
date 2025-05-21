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
