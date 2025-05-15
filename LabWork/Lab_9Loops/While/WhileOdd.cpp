#include<iostream>
using namespace std;

//odd number 
int main(){
	int i=1, n;
	cout<<"Enter the Value of N: ";
	cin>>n;
	while(i<=n){
		if(i%2 != 0){
			cout<<i<<" ";
		}
		i++;
	}
}