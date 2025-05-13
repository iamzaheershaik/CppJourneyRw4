#include<iostream>
using namespace std;

int main(){
    int r, c;
    for(r=1; r<=6; r++){
        for(c=1; c<=6; c++){
            if((r==1 && (c>=2 && c<=4))|| (r==5 && (c>=2 && c<=5)) || ((r>=2 && r<=4) && (c==1)) || ((r>=2 && r<=4) && (c==5))|| (r==3 && c==3) || (r==4 && c==4)|| (r==6&&c==6)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
