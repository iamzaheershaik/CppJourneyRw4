#include<iostream>
using namespace std;

int main(){
	int i, j, row;
	cout<<"Enter the No of rows ";
	cin>>row;
	for(i=row; i>=1; i--){
		for(j=1; j<=i; j++){
			cout<<(row-i+1);
		}
		cout<<endl;
	}
}