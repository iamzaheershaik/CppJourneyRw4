#include<iostream>
using namespace std;

int main(){
	/*
	Swapping of Two Numbers
	Lets Use two Methods To Swap

	First Take 2 Same Type of Data types 
	Name them ;
	Assign values;
	Then Take Another Same type of Data type
	First Assign it Third Hence here 1 Data store in Third 
	Then Assign 2 Value To 1 Hence  Hence Value in 2 Stores in 1
	Then Lastly Assign Third to Second Hence the Value of The value in Third Stores in First
	Hence Print The updated first and seconds Values
	Exit
	*/
/*Method -1 */
	int X;
	int Y;
	cout<<"Before Swapping Value X:- ";
	cin>>X;
	cout<<"Before Swapping Value Y:- ";
	cin>>Y;

	int Z;

	Z = X;
	X = Y;
	Y = Z;

	cout<<"After Swapping Value X:- "<< X <<endl;
	cout<<"After Swapping Value Y:- "<<Y<<endl;
	return 0;
	
/*Method -2 */
	/*
 	int X;
	int Y;
	cout<<"Before Swapping Value X:- ";
	cin>>X;
	cout<<"Before Swapping Value Y:- ";
	cin>>Y;

	X = X+Y;
	Y = X-Y;
	X = X-Y;

	cout<<"After Swapping Value X:- "<< X <<endl;
	cout<<"After Swapping Value Y:- "<<Y<<endl;
	*/
}