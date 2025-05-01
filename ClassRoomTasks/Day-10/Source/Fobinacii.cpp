#include <iostream>
using namespace std;

int main(){
	int i, n1=0, n2=1, n3, num;
	cout<<"Enter the Num Value ";
	cin>>num;
	for(i=0; i<num; i++){
		cout<<n1<<" ";
		n3 = n1+n2;
		n1 = n2;
		n2 =n3;
	}
}