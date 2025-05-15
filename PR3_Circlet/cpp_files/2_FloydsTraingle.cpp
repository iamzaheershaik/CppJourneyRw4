#include<iostream>
using namespace std;

int main(){
	int i , j, rows, n = 11;
	cout<<"Enter the no of rows" ;
	cin>>rows;
	for(i=1; i<=rows; i++){
		for(j=1; j<=i; j++){
			cout<<n<<" ";
			n+=1;
		}
		cout<<endl;
	}
}