#include<iostream>
using namespace std;

//Even Number
int main(){
	int i=1, n, Sum=0;
	cout<<"Enter the Value of N: ";
	cin>>n;
	do{
		cout<<i<<" ";
		i++;
		Sum+=i;
	}while(i<=n);
		cout<<"Sum: -"<<Sum;
} 