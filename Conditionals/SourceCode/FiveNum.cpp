#include <iostream>
using namespace std;

int main(){
	int a, b, c, d, e;
	cout<<"Enter the Value of a : ";
	cin>>a;
	cout<<"Enter the Value of b : ";
	cin>>b;
	cout<<"Enter the Value of c : ";
	cin>>c;
	cout<<"Enter the Value of d : ";
	cin>>d;
	cout<<"Enter the Value of e : ";
	cin>>e;
	cout<<"The Value of a = "<<a<<endl;
	cout<<"The Value of b = "<<b<<endl;
	cout<<"The Value of c = "<<c<<endl;
	cout<<"The Value of d = "<<d<<endl;
	cout<<"The Value of e = "<<e<<endl;

	if(a==b && b ==c && c == d && d == e){
		cout<<"All are Having Equal Values "<<endl;
	}else{
		if(a>b){
			if(a>c){
				if(a>d){
					if(a>e){
						cout<<"The Value of a = "<<a<<"is Max"<<endl;
					}else{
						cout<<"The Value of e = "<<e<<"is Max"<<endl;
					}
				}else if(d>e){
					cout<<"The Value of d = "<<d<<"is Max"<<endl;
				}else{
					cout<<"The Value of e = "<<e<<"is Max"<<endl;
				}
			}else if(c>d){
					if(c>e){
						cout<<"The Value of c = "<<c<<"is Max"<<endl;
					}else{
						cout<<"The Value of e = "<<e<<"is Max"<<endl;
					}
			}else if(d>e){
				cout<<"The Value of d = "<<d<<"is Max"<<endl;
			}else{
				cout<<"The Value of e = "<<e<<"is Max"<<endl;
			}
		}else if(b>c){
				if(b>d){
					if(b>e){
						cout<<"The Value of b = "<<b<<"is Max"<<endl;
					}else{
						cout<<"The Value of e = "<<e<<"is Max"<<endl;
					}
				}else if(d>e){
					cout<<"The Value of d = "<<d<<"is Max"<<endl;
				}else{
					cout<<"The Value of e = "<<e<<"is Max"<<endl;
				}
		}else if(c>d){
				if(c>e){
					cout<<"The Value of c = "<<c<<"is Max"<<endl;
				}else{
					cout<<"The Value of e = "<<e<<"is Max"<<endl;
				}
		}else if(d>e){
				cout<<"The Value of d = "<<d<<"is Max"<<endl;
		}else{
			cout<<"The Value of e = "<<e<<"is Max"<<endl;
		}
	}
}