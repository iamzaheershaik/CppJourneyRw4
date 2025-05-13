
#include<iostream>
using namespace std;

int main(){
    int r, c, rows;
    cout<<"enter the number of rows: ";
    cin>>rows;
    for(r=1; r<=rows; r++){
        for(c=1; c<=rows; c++){
            if( c==1 || c==5  || ((c%2!=0)&& r==3)|| (c!=3&&r==4)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}