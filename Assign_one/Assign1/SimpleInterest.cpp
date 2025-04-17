#include<iostream>
using namespace std;

int main(){
    /* Simple Interest Formulae   PTR/100
    P : Percentage;
    T : Term;
    R : Rate of Interest;
     Simple Interest = PTR/100
    */

    /*
    PSEUDO CODE

    Start
    First Assign the  Names For  P T R
    Take Float To R
    Assign Values the TO it
    to find Simple Intreset The formula Is PTR /100
    print the Values
    Exit

    */
    int P;
    int T;
    float R;
    cout<< " Enter the Value of P:- ";
    cin>>P;

    cout<< " Enter the Value of T:- ";
    cin>>T;

    cout<< " Enter the Value of R:- ";
    cin>>R;

    cout<<"Simple Interest :- " << ((P * T * R)/100);
    return 0;

}