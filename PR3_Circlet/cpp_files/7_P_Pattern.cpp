#include<iostream>
using namespace std;

int main(){
    int r, c, rows;
    cout<<"enter the number of rows: ";
    cin>>rows;
    for(r=1; r<=rows; r++){
        for(c=1; c<=rows; c++){
            if(r==1 || r==3 || c==1 || (r==2&&c==5)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
