#include<iostream>
using namespace std;

int main(){

     /* Lets Find The Area Of Triangle

     Area of Trinangle: 1/2 x B x H;
        B= base  of the Triangle;
        H = Height of Triangle
     * /

     /*PSEUDO CODE
     Start the Program
     Take B and H Assign them to data type
     input the Values
     print the result
     exit the fuction
     */
     int Base;
     int Height;
     cout << "Enter the Value of Base:- ";
     cin >> Base;

      cout << "Enter the Value of height:- ";
      cin >> Height;

      cout<<"The Area of the Triangle : - " << (0.5 * Base * Height) <<"sqm" <<endl;
      return 0;
}
