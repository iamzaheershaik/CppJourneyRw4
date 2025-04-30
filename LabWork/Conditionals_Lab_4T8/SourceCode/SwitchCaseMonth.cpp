#include<iostream>
using namespace std;

int main(){
	int Month,NumOfDays;
	cout<<"Enter the Month 1 to 12 ";
	cin>>Month;

	switch(Month){
		case 1: cout<<"This is New Year Month January 31 Days"<<endl;
			break;
		case 2: cout<<"This is Smallest Month of Year Feb 28 or 29"<<endl;
			break;
		case 3: cout<<"March: Holi is Celebrated in This Month "<<endl;
			break;
		case 4: cout<<"April: People Make Others Fool on First Day of This Month April 30 Days"<<endl;
			break;	
		case 5: cout<<"May: is The Month Summer Holidays 31 Days "<<endl;
			break;
		case 6: cout<<"June: Children Hate this Month Because Back to School  month 30 Days"<<endl;
			break;
		case 7: cout<<"July: is Month of Monsoon Starts 31 Days"<<endl;
			break;
		case 8: cout<<"August: The Month of Independence of India With 31 Days"<<endl;
			break;
		case 9: cout<<"September: The Month of Ganesh Chaturthi will be Celebrated 30 Days"<<endl;
			break;	
		case 10: cout<<"October: The Month of Dusshera 31 Days"<<endl;
			break;
		case 11: cout<<"November: The Biggest Festival of India 30 Days"<<endl;
			break;
		case 12: cout<<"Decemeber: The Month of Christmas and The End of Year"<<endl;
			break;
		default:cout<<"This is Invalid Month"<<endl;
	}
}