#include <iostream>
using namespace std;

int main(){
	int Age, EligiableIn;
	cout<<"Enter the Age ";
	cin>>Age;
	EligiableIn = 18 - Age;
	if(Age>=18){
		cout<<"Your Eligiable for Vote"<<endl;
	}else{
		cout<<"Your Are Still " <<Age<<" You Need To Wait For "<<EligiableIn<<" More Years To Vote"<<endl;
	}
}