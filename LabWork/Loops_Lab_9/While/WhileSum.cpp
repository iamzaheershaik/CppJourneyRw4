#include<iostream>
using namespace std;

//Even Number
int main(){
	int i=1, n, sum=0;
	cout<<"Enter the Value of N: ";
	cin>>n;
	while(i<=n){
		cout<<i<<" "<<endl;
		i++;
		sum=sum+i;
	}cout<<"Sum :- "<<sum<<endl;
}