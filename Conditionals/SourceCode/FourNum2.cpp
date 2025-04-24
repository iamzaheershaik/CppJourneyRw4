#include <iostream>
using namespace std;

int main(){
	int a, b, c, d;
	cout<<"Enter the Value of a ";
	cin>>a;
	cout<<"Enter the Value of b ";
	cin>>b;
	cout<<"Enter the Value of c ";
	cin>>c;
	cout<<"Enter the Value of d ";
	cin>>d;
if(a==b && b ==c && c==d){
	cout<<"The All Values are Equal"<<endl;
}else {
		if(a>b){
		if(a>c){
			if(a>d){
				cout<<"The Value of A = "<<a<<"is Max"<<endl;
			}else{
				cout<<"The Value of d = "<<d<<"is Max"<<endl;
			}
		}else if(c>d){
			cout<<"The Value of C = "<<c<<"is Max"<<endl;
		}else{
			cout<<"The Value of D = "<<d<<"is Max"<<endl;
		}
	}else if(b>c){
			if(b>d){
				cout<<"The Value of B = "<<b<<"is Max"<<endl;
			}else{
				cout<<"The Value of D = "<<d<<"is Max"<<endl;
			}

	}else if(c>d){
				cout<<"The Value of C = "<<c<<"is Max"<<endl;
			}
			else{
				cout<<"The Value of d  = "<<d<<"is Max"<<endl;
			}

}

}