#include<iostream>
using namespace std;

//Even Number
int main(){
	int i=1, n;
	cout<<"Enter the Value of N: ";
	cin>>n;
	do{
		if(i%2!=0){
			cout<<i<<" ";
		}
		i++;
	}while(i<=n);
} 