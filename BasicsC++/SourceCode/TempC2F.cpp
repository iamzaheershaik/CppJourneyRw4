#include<iostream>
using namespace std;

int main(){
	/*
	Lets change of Temperature From Celsius To Fahreheight

	The Formular To F = (°C × 9/5) + 32
	
	Lets Assign Variable Assign to value C Temperature Value
	Then Apply in Formulae
	Print in out result;
	*/

	int TempC;
	cout<<"Enter the Temperature You Want to Convert:- ";
	cin >>TempC;
	cout << "The Converted Value in Fahreheight F =  "<<((TempC * 9/5) + 32)<<endl;

}