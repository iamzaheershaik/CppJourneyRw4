#include <iostream>
using namespace std;

int main(){
	int a,b,c,d;
	cout<<"Enter the Value of a: ";
	cin>>a;
	cout<<"Enter the Value of b: ";
	cin>>b;
	cout<<"Enter the Value of c: ";
	cin>>c;
	cout<<"Enter the Value of d: ";
	cin>>d;
	cout<<"The Value of a : "<<a<<endl;
	cout<<"The Value of b : "<<b<<endl;
	cout<<"The Value of c : "<<c<<endl;
	cout<<"The Value of d : "<<d<<endl;
	if(a==b&&b==c&&c==d){
		cout<<"All Values are Having Equal Values"<<endl;	
	}else if(a>b){
		if(a>c){
			if(a>d){
				cout<<"The Value of a = "<<a<<"is Max"<<endl;
			}else{
				cout<<"The Value of d = "<<d<<"is Max"<<endl;
			}

		}else{
			cout<<"The Value of c  = "<<c<<"is Max"<<endl;
		}
	}else if(b>c){
		cout<<"The Value of b = "<<d<<"is Max"<<endl;
	}else{
		cout<<"The Value of c = "<<c<<"is Max"<<endl;
	}


}
