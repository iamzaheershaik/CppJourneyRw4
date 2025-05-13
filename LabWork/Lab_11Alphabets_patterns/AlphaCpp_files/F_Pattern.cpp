
#include <iostream>
using namespace std;

int main(){
    int i, j, rows;
    cout<<"enter the no of rows ";
    cin>>rows;
    for(i=1; i<=rows; i++){
        for(j=1; j<=rows; j++){
            if(i==1 || (i==3 && j<=4)|| j==1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}