#include<iostream>
using namespace std;

int main(){
    int r, c;
    for(r=1; r<=7; r++){
        for(c=1; c<=6; c++){
            if(r==1 || r==3 || c==1 || (r==2&&c==6) || (r==4&&c==2) || (r==5&&c==3) || (r==6&&c==4) || (r==7&&c==5)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
