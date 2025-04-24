#include <iostream>
using namespace std;

int main(){
	int a, b, c, d, e, f;
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
	cout<<"Enter the Value of f : ";
	cin>>f;
	cout<<"The Value of a = "<<a<<endl;
	cout<<"The Value of b = "<<b<<endl;
	cout<<"The Value of c = "<<c<<endl;
	cout<<"The Value of d = "<<d<<endl;
	cout<<"The Value of e = "<<e<<endl;

	if(a==b && b ==c && c == d && d == e && e==f){
		cout<<"All are Having Equal Values "<<endl;
	}else{
		if(a>b){
			if(a>c){
				if(a>d){
					if(a>e){
						if(a>f){ 
							cout<<"A is Max"<<endl;
						}else{
							cout<<"F is Max"<<endl;
						}
					}else{
						if(e>f){
							cout<<"E is Max"<<endl;
						}else{
							cout<<"F is Max"<<endl;
						}
					}
				}else {
					if(d>e){
						if(d>f){
							cout<<"D is Max"<<endl;
						}else{
							cout<<"E is Max"<<endl;
						}
					}else{
						if(e>f){
							cout<<"E is Max"<<endl;
						}else{
							cout<<"F is Max"<<endl;
						}
					}
				}
			}else{
				if(c>d){
					if(c>e){
						if(c>f){
							cout<<"C is Max"<<endl;
						}else{
							cout<<"F is Max"<<endl;
						}
					}else{
						if(e>f){
							cout<<"E is Max"<<endl;
						}else{
							cout<<"F is Max"<<endl;
						}
					}
				}else{
					if(d>e){
						if(d>f){
							cout<<"D is Max"<<endl;
						}else{
							cout<<"f is Max"<<endl;
						}
					}else{
						if(e>f){
							cout<<"E is Max"<<endl;
						}else{
							cout<<"F is Max"<<endl;
						}
					}
				}
			}
		}else{
			if(b>c){
				if(b>d){
					if(b>e){
						if(b>f){
							cout<<"B is Max"<<endl;
						}else{
							cout<<"F is Max"<<endl;
						}
					}else{
						if(e>f){
							cout<<"E is Max"<<endl;
						}else{
							cout<<"F is Max"<<endl;
						}
					}
				}else{
					if(d>e){
						if(d>f){
							cout<<"D is Max"<<endl;
						}else{
							cout<<"F is Max"<<endl;
						}
					}else{
						if(e>f){
							cout<<"E is Max"<<endl;
						}else{
							cout<<"F is Max"<<endl;
						}
					}
				}
			}else{
				if(c>d){
					if(c>e){
						if(c>f){
							cout<<" C is Max"<<endl;
						}else{
							cout<<" F is Max"<<endl;
						}
					}else{
						if(e>f){
							cout<<"E is Max"<<endl;
						}else {
							cout<<"F is Max"<<endl;
						}
					}
				}else{
					if(d>e){
						if(d>f){
							cout<<"D is Max"<<endl;
						}else{
							cout<<"F is Max"<<endl;
						}
					}else {
						if(e>f){
							cout<<"E is Max"<<endl;
						}else{
							cout<<"F is Max"<<endl;
						}
					}
				}
			}
		}
	}
}