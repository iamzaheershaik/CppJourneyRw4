#include<iostream>
using namespace std;

int main(){
    int i, j, rows;
    cout<<"Enter the No of Rows ";
    cin>>rows;
    for(i=1; i<=rows; i++){
        for(j=1; j<=rows; j++){
            if( i==1 || i==9 || j==1 || j==9 || ((i==2||i==8) && j!=5) ||((j>=1 && j<=3) && (i==3 || i==7)) || ((j>=7 && j<=9) && (i==3 || i==7)) || ((i==4||i==6) && (j==2 ||j==8))) {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }

        }
        cout<<endl;
    }
}