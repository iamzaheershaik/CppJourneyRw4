#include <iostream>
using namespace std;

int main(){
    int r, c;
    for(r=1; r<=5; r++){
        for(c=1; c<=5; c++){
            if(c==1 || (r==1 && c<=4) || (r==5 && c<=4) || ((r>=2 && r<=4) && c==5) ){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
