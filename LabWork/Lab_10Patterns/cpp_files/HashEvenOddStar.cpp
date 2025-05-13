
#include<iostream>
using namespace std;

int main(){
    int i, j, rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    for(i=1; i<=rows; i++){
        for(j=1; j<=i; j++){
            if(j%2==0){
                cout << "# ";
            } else {
                cout << "* ";
            }
        }
        cout << endl;
    }
}