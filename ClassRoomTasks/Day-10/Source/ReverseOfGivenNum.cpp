#include <iostream>
using namespace std;
int main(){
	int n, orig, r, rev=0;
	cout<<"Enter the Value of n";
	cin>>n;
	while(n!=0){
		r= n%10;
		rev = ((rev*10)+r);
		n= n/10;
		
	}cout<<"Reverse Number: "<<rev<<endl;
}
