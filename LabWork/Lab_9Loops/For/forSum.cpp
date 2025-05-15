#include <iostream>
using namespace std;

int main(){
	int i, n, sum=0;
	cout<<"Enter the Value of N";
	cin>>n;
	for(i=1; i<=n; i++){
		cout<<i<<" ";
		sum = sum+i;
	}
	
	cout<<"Sum :- "<<sum<<endl;
}