#include <iostream>
using namespace std;
int main(){
	int n, orig, r, rev=0;
	cout<<"Enter the Value of n: ";
	cin>>n;
	orig=n;
	while(n!=0){
		r= n%10;
		rev = ((rev*10)+r);
		n= n/10;
		
	}cout<<rev<<endl;
	if(orig == rev){
		cout<<"The Given Number "<<orig<<" is Palidrome Number"<<endl;
	}else{
		cout<<"The Given Number "<<orig<<" is Not a  Palidrome Number"<<endl;
	}
}
