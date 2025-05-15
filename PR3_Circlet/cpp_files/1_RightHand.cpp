#include <iostream>
using namespace std;

int main(){
    int i, j, rows, num;
    cout<<"Enter the No of rows";
    cin>>rows;
    for(i=1; i<=rows; i++){
        for(j=1; j<=rows; j++){
            if(j==1 ||((i>=2 &&i<=5)&&j==2)|| ((i>=3 &&i<=5)&&j==3) || ((i>=4 &&i<=5)&&j==4) ||(i==5&&j==5) ){ 
                num=41;
                cout<<num+j-1<<" ";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
