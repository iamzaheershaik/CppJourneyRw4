#include<iostream>
using namespace std;
double  Add(double Num1, double Num2 ) {
    return  Num1+Num2;
}
double  Sub(double Num1, double Num2 ) {
    return  Num1-Num2;
}
double  Mult(double Num1, double Num2 ) {
    return  Num1*Num2;
}
double  Div(double Num1, double Num2 ){
    if (Num2!=0){
            return Num1 / Num2;
    }else {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0;
    }
}
int  Mod(int Num1, int Num2 ){
    if (Num2!=0){
        return Num1 % Num2;
    }else {
        cout << "Error: Modulo  by zero is not allowed." << endl;
        return 0;
    }
}

int main() {
    int option;
    double Num1, Num2;
    do {
        // Display the menu
        cout << "\nArithmetic Calculator" << endl;
        cout << "1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Divide" << endl;
        cout << "5. Modulo" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your option: ";
        cin >> option;

        switch (option) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> Num1 >> Num2;
                cout << "Result: " << Add(Num1, Num2) << endl;
                break;
            case 2:
                cout << "Enter two numbers: ";
                cin >> Num1 >> Num2;
                cout << "Result: " << Sub(Num1, Num2) << endl;
                break;
            case 3:
                cout << "Enter two numbers: ";
                cin >> Num1 >> Num2;
                cout << "Result: " << Mult(Num1, Num2) << endl;
                break;
            case 4:
                cout << "Enter two numbers: ";
                cin >> Num1 >> Num2;
                cout << "Result: " << Div(Num1, Num2) << endl;
                break;
            case 5:
                cout << "Enter two numbers: ";
                cin >> Num1 >> Num2;
                cout << "Result: " << Add(Num1, Num2) << endl;
                break;
            case 6:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }while (option!=6);
}





