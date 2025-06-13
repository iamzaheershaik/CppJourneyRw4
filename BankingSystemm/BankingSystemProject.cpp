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
        if (accno == getAccountNo()) {
            setBalance(getBalance()+deposit);
            cout << "Deposit successful. New balance: ₹" << getBalance() << endl;
        }else{
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
    SBI B[50];
    int choice;
    int accountNo;
    float initialDeposit;
    float amount;
    string accountHolder;
    int count =0;
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
                if (count >= 50) {
                    cout << "Account limit reached. Cannot create more accounts." << endl;
                    break;
                }else{
                    cout<<"Please Enter Your Name"<<endl;
                    getline(cin,accountHolder);
                    cout<<"Next Enter Your Account Number"<<endl;
                    cin>>accountNo;
                    cout<<" Deposit  initial Balance"<<endl;
                    cin>>initialDeposit;
                    B[count].createAccount(accountNo,accountHolder,initialDeposit);
                    cout<<"Congrats Your Now Part SBI Family"<<endl;
                    count++;
                    break;
                }
            case 2:
                cout << "Enter Your Account No: ";
                cin >> accountNo;
                for (int i = 0; i < count; i++) {
                    if (B[i].getAccountNo() == accountNo){
                        B[i].checkDetails(accountNo);
                        break;
                    }
                }break;
            case 3:
                cout<<"Enter Your Account No: "<<endl;
                cin>>accountNo;
                cout<<"Deposit the Amount"<<endl;
                cin>>amount;
                for (int i = 0; i <count; i++) {
                    if (B[i].getAccountNo() == accountNo) {
                        B[i].Deposit(accountNo, amount);
                        break;
                    }
                }break;
            case 4:
                    cout<<"Enter Your Account No: "<<endl;
                    cin>>accountNo;
                    cout<<"Enter the Withdraw Amount"<<endl;
                    cin>>amount;
                for (int i = 0; i<count; i++) {
                    if (B[i].getAccountNo() == accountNo) {
                        B[i].withDraw(accountNo, amount);
                        break;
                    }
                }break;
            case 5:
                    cout << "Thank you for using the Bank system." << endl;
                    return 0;
                    default:
                    cout << "Invalid choice. Please try again." << endl;
                }
        }
    }

