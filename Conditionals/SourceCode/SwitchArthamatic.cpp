#include <iostream>
using namespace std;
 int main(){
 	int a, b, Option;
 	cout<<"Enter the Value of a: ";
 	cin>>a;
 	cout<<"Enter the Value of b: ";
 	cin>>b;
 	cout<<"Enter the Option: ";
 	cin>>Option;

 	switch(Option){
 		case 1:cout<<"Perform The Addition "<<a+b<<endl;
 			break;
 		case 2:cout<<"Perform The Subraction "<<a-b<<endl;
 			break;
 		case 3:cout<<"Perform The Multiplication "<<a*b<<endl;
 			break;
 		case 4:cout<<"Perform The Divison "<<a/b<<endl;
 			break;
 		case 5:cout<<"Perform The Modulo "<<a%b<<endl;
 			break;
 	}
 }