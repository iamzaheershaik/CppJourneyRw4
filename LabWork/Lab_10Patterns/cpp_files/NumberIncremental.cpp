#include<iostream>
using namespace std;

int main(){
	int i, j, row;
	cout<<"Enter the No of rows ";
	cin>>row;
	for(i=1; i<=row; i++){
		for(j=1; j<=i; j++){
			cout<<i;
		}
		cout<<endl;
	}
}