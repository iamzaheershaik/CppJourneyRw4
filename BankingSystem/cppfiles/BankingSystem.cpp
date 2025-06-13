#include<iostream>
using namespace std;
class SBI {
private:
    int AccountNo;
    float Balance;
    string Name;
public:
    void setAccountNo(int AccountNo){
        this->AccountNo = AccountNo;
    }
    void setName(string Name){
        this->Name = Name;
    }
    void setBalance(float Balance){
        this->Balance =Balance;
    }
    int getAccountNo() {
        return  AccountNo;
    }
    string getName() {
        return Name;
    }
    float getBalance() {
        return Balance;
    }

    void createAccount(int accno, string name, float balance) {
        setAccountNo(accno);
        setName(name);
        setBalance(balance);
    }
    void checkDetails(int accno) {
        if (accno==getAccountNo()){
            cout << "Account Holder: " << getName() << endl;
            cout << "Account Number: " << getAccountNo() << endl;
            cout << "Balance: ₹" << getBalance() << endl;
        }else {
            cout<<"Account Not Found"<<endl;
        }
    }
    void Deposit(int accno, float deposit) {
        if (accno == getAccountNo()){
            if (deposit >=1000) {
                setBalance(getBalance()+deposit);
                cout << "Deposit successful. New balance: ₹" << getBalance() << endl;
            }else {
                cout<<"Please Deposit Amount of minimum 1000 as initial Deposit"<<endl;
            }
        }else {
            cout<<"invalid account Number"<<endl;
        }
    }
    void withDraw(int accno, float withDraw) {
        if (accno == getAccountNo()) {
            if (withDraw <= getBalance()) {
                setBalance(getBalance()-withDraw);
                cout << "withDraw successful. New balance: ₹" << getBalance() << endl;
            }else {
                cout<<"insufficient Balance"<<endl;
            }
        }else {
            cout<<"invalid account Number"<<endl;
        }
    }
};
int main() {
    SBI B;
    int choice;
    int accountNo;
    float initialDeposit;
    float amount;
    string accountHolder;

    while (true) {
        cout<<"Welcome To STATE BANK OF INDIA"<<endl;
        cout<<"Press:1 Create a Account"<<endl;
        cout<<"Press:2 Check Account Details"<<endl;
        cout<<"Press:3 Deposit Amount"<<endl;
        cout<<"Press:4 Withdraw Amount"<<endl;
        cout<<"Press:5 Exit"<<endl;
        cout<<"Enter Your Choice"<<endl;
        cin>>choice;
        cin.ignore();
        switch (choice) {
            case 1:
                cout<<"Please Enter Your Name"<<endl;
                getline(cin,accountHolder);
                cout<<"Next Enter Your Account Number"<<endl;
                cin>>accountNo;
                cout<<" Deposit Amount As initial Balance Minimum is 1000"<<endl;
                cin>>initialDeposit;
                B.createAccount(accountNo,accountHolder,initialDeposit);
                cout<<"Congrats Your Now Part SBI Family"<<endl;
                break;
            case 2:
                cout << "Enter Your Account No: "<<endl;
                cin >> accountNo;
                B.checkDetails(accountNo);
                break;
            case 3:
                cout<<"Enter Your Account No: "<<endl;
                cin>>accountNo;
                cout<<"Deposit the Amount"<<endl;
                cin>>amount;
                B.Deposit(accountNo, amount);
                break;
            case 4:
                cout<<"Enter Your Account No: "<<endl;
                cin>>accountNo;
                cout<<"Enter the Withdraw Amount"<<endl;
                cin>>amount;
                B.Deposit(accountNo, amount);
                break;
            case 5:
                cout << "Thank you for using the Bank system." << endl;
                return 0;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
}
