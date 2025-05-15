#include<iostream>
using namespace std;

int main(){
    int i, j;
    for(i=1; i<=5; i++){
        for(j=1; j<=9; j++){
            if(j==5 || 
                ((i>=2&&i<=5)&&(j==4||j==6))|| 
                ((i>=3&&i<=5)&&(j==3|| j==7))||
                ((i>=4&&i<=5)&&(j==2||j==8)) ||
                (i==5&&(j==1||j==9)))
                {
                if(j<=5){
                    cout<<j<<" ";
                }else{
                    cout<<10-j<<" ";
                }
            } else{
                cout<<"  ";
            }

        }
        cout<<endl;
    }
}
