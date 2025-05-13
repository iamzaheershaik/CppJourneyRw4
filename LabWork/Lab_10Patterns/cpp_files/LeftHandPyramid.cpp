#include<iostream>
using namespace std;

int main(){
	int i, j, k, rows;
	cout<<"enter the No of rows ";
	cin>>rows;

	for(i=1; i<=rows; i++){
		for(k=rows-i; k>0; k--){
			cout<<" ";
		}
		for(j=1; j<=i; j++){
			cout<<"*";
		}
		cout<<endl;                                                                                                                                               
	}
}