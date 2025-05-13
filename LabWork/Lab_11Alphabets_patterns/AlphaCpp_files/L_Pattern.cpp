#include<iostream>
using namespace std;

int main(){
    int r, c, rows;
    cout<<"enter the number of rows: ";
    cin>>rows;
    for(r=1; r<=rows; r++){
        for(c=1; c<=r; c++){
            if(r==5 || c==1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
