
#include <iostream>
using namespace std;

int main(){
    int i, j, rows;
    cout<<"Enter the No of Rows ";
    cin>>rows;
    for (i=1; i<=rows; i++) {
        for (j=1; j<=rows; j++) {
            if ((i==1 &&(j==1||j==5)) ||  (i==2&&(j==2||j==4)) || ((j==3)&&(i>=3&&i<=5))){
                cout<<"* ";
            }
            else {
                cout<<"  ";
            }

        }
        cout<<endl;
    }
}