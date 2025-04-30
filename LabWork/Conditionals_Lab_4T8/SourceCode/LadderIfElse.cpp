#include <iostream>
using namespace std;

int main(){
	int a,b,c,d,e,f;
	cout<<"Enter the Value of a = ";
	cin>>a;
	cout<<"Enter the Value of b = ";
	cin>>b;
	cout<<"Enter the Value of c = ";
	cin>>c;
	cout<<"Enter the Value of d = ";
	cin>>d;
	cout<<"Enter the Value of e = ";
	cin>>e;
	cout<<"Enter the Value of f = ";
	cin>>f;

	if(a==b && b==c && c==d && d==e && e==f){
		cout<<"All Values of Variables are Equal"<<endl;
	}else if(a>b && a>c && a>d && a>e && a>f){
		cout<<"The Value of a is Max"<<endl;
	}else if(b>a && b>c && b>d && b>e && b>f){
		cout<<"The Value of b is Max"<<endl;	
	}else if(c>a && c>b && c>d && c>e && c>f){
		cout<<"The Value of c is Max"<<endl;
	}else if(d>a && d>b && d>c && d>e && d>f){
		cout<<"The Value of d is Max"<<endl;
	}else if(e>a && e>b && e>c && e>d && e>f){
		cout<<"The Value of e is Max"<<endl;
	}else if(f>a && f>b && f>c && f>d && f>e){
		cout<<"The Value of f is Max"<<endl;
	}else{
		cout<<"The Values are Negative"<<endl;
	}
}