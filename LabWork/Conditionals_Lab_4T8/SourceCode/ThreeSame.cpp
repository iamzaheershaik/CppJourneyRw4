#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	cout<<"Enter the Value of a: ";
	cin>>a;
	cout<<"Enter the Value of b: ";
	cin>>b;
	cout<<"Enter the Value of C: ";
	cin>>c;
	cout<<"The Value of a = "<<a<<endl;
	cout<<"The Value of b = "<<b<<endl;
	cout<<"The Value of c = "<<c<<endl;
	if(a==b&&b==c){
		cout<<"The all Values are Equal"<<endl;
	}else if(a>b){
			if(a>c){
				cout<<"The Value of a = "<<a<<"is Maximum"<<endl;
			}else{
				cout<<"The Value of c = "<<c<<"is Maximum"<<endl;
			}
	}else if(b>c){
		cout<<"The Value of b = "<<b<<"is Maximum"<<endl;
	}
	else{
		cout<<"The Value of c = "<<c<<"is Maximum"<<endl;
	}
}