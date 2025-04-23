#include <iostream>
using namespace std;

int main(){
	int a, b, c;
	cout<<"Enter the Value of A : ";
	cin>>a;
	cout<<"Enter the Value of B : ";
	cin>>b;
	cout<<"Enter the Value of C : ";
	cin>>c;
	if(a>b){
		if(a>c){
			cout<<"The Value of A is Max"<<endl;
		}
		else{
			cout<<"The Value of C is Max"<<endl;
		}
	}else if(b>a){
		cout<<"The Value of b is Max"<<endl;
	}else{
		cout<<"The Value of a is Max"<<endl;
	}if(a == b  == c){
		cout<<"All are having equal Values"<<endl;
	}else{
		cout<<"Invalid Number"<<endl;
	}
}