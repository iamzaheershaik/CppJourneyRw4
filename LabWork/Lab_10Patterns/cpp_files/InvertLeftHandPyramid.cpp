#include<iostream>
using namespace std;

int main(){
	int i, j, k, rows;
	cout<<"enter the No of rows ";
	cin>>rows;

	for(i=rows; i>=1; i--){
		for(k=rows-i; k>0; k--){
			cout<<" ";
		}
		for(j=i; j>0; j--){
			cout<<"*";
		}
		cout<<endl;                                                                                                                                                                                                                                                
	}
}