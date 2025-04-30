#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cout<<"Enter the Value of a :";
	cin>>a;
	cout<<"Enter the Value of b :";
	cin>>b;
	cout<<"Enter the Value of c :";
	cin>>c;

	(a<b)?(a>c)?cout<<"The Value of A is Max" : cout<<"The Value of C is Max" : (b>c)? cout<<"The Value of A is Max" : cout<<"The Value of C is Max";
}