#include <iostream>
using namespace std;

int main(){
	int rows, i, j;
	cout<<"Enter the No of Rows " <<endl;
	cin>>rows;
	for(i=1; i<=rows; i++){
		for(j=1; j<=i; j++){
			cout<<"* ";
		}
		cout<<endl;                                  
	}
}                       