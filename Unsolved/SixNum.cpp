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
	}
	else if(a>b){
			if(a>c){
				if(a>d){
					if(a>e){
						if(a>f){
							cout<<"The Value of a = "<<a<<"is Max"<<endl;
						}else{
							cout<<"The Value of f = "<<f<<"is Max"<<endl;
						}
					}else if(e>f){
							cout<<"The Value of e = "<<e<<"is Max"<<endl;
						}else{
							cout<<"The Value of f = "<<f<<"is Max"<<endl;
					}
				}else if(d>e){
						if(d>f){
							cout<<"The Value of d = "<<d<<"is Max"<<endl;
						}else{
							cout<<"The Value of f = "<<f<<"is Max"<<endl;
						}
				}else if(e>f){
						cout<<"The Value of e = "<<e<<"is Max"<<endl;
					}else{
						cout<<"The Value of f = "<<f<<"is Max"<<endl;
					}
				}else if(c>d){
						if(c>e){
							if(c>f)
								cout<<"The Value of c = "<<c<<"is Max"<<endl;
							}else{
								cout<<"The Value of f = "<<f<<"is Max"<<endl;
							}
						}else if(e>f){
							cout<<"The Value of e = "<<e<<"is Max"<<endl;
						}else{
							cout<<"The Value of f = "<<f<<"is Max"<<endl;
						}
}else if(d>e){
			if(d>f){
				cout<<"The Value of d = "<<d<<"is Max"<<endl;
					}else{
						cout<<"The Value of f = "<<f<<"is Max"<<endl;
					}
				}else if(e>f){
						cout<<"The Value of e = "<<e<<"is Max"<<endl;
				}else{
					cout<<"The Value of f = "<<f<<"is Max"<<endl;
				}
	}else if(b>c){
			if(b>d){
				if(b>e){
					if(b>f){
						cout<<"The Value of b = "<<b<<"is Max"<<endl;
					}else{
						cout<<"The Value of f = "<<f<<"is Max"<<endl;
					}
				} else if(e>f){
					cout<<"The Value of e = "<<e<<"is Max"<<endl;
				}else{
					cout<<"The Value of f = "<<f<<"is Max"<<endl;
				}
			}else if(d>e){
					if(d>f){
						cout<<"The Value of d = "<<d<<"is Max"<<endl;
					}else {
						cout<<"The Value of f = "<<f<<"is Max"<<endl;
					}
			}else if (e>f){
				cout<<"The Value of e = "<<e<<"is Max"<<endl;
			}else{
				cout<<"The Value of f = "<<f<<"is Max"<<endl;
			}


	}else if(c>d){
			if(c>e){
				if(c>f){
					cout<<"The Value of c = "<<c<<"is Max"<<endl;
				}else{
					cout<<"The Value of f = "<<f<<"is Max"<<endl;
				}
			}else if(e>f){
				cout<<"The Value of e = "<<e<<"is Max"<<endl;
			}else{
				cout<<"The Value of f = "<<f<<"is Max"<<endl;
			}
	}else if(d>e){
			if(d>f){
				cout<<"The Value of d = "<<d<<"is Max"<<endl;
			}else{
				cout<<"The Value of f = "<<f<<"is Max"<<endl;
			}
	}else if(e>f){
			cout<<"The Value of e = "<<e<<"is Max"<<endl;
	}else{
		cout<<"The Value of f = "<<f<<"is Max"<<endl;
	}
