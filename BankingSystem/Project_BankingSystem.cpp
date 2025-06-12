#include<iostream>
using namespace std;

class Bank {
private:
    int AccountNo;
    string HolderName;
    float Balance;

public:
    void setAccount(int accNo, string name, float initialDeposit) {
        AccountNo = accNo;
        HolderName = name;
        Balance = initialDeposit;
    }

    void showAccountDetails(int accNo) {
        if (accNo == AccountNo) {
            cout << "Account Holder: " << HolderName << endl;
            cout << "Account Number: " << AccountNo << endl;
            cout << "Balance: $" << Balance << endl;
        } else {
            cout << "Account not found!" << endl;
        }
    }

    void deposit(int accNo, float amount) {
        if (accNo == AccountNo) {
            Balance += amount;
            cout << "Deposit successful. New balance: $" << Balance << endl;
        } else {
            cout << "Invalid Account Number!" << endl;
        }
    }

    void withdraw(int accNo, float amount) {
        if (accNo == AccountNo) {
            if (amount <= Balance) {
                Balance -= amount;
                cout << "Withdrawal successful. New balance: $" << Balance << endl;
            } else {
                cout << "Insufficient balance!" << endl;
            }
        } else {
            cout << "Invalid Account Number!" << endl;
        }
    }
};

int main() {
    Bank b;
    int choice;
    int accountNo;
    float amount;
    float initialDeposit;
    string accountHolderName;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Create Account\n";
        cout << "2. Check Account Details\n";
        cout << "3. Deposit Amount\n";
        cout << "4. Withdraw Amount\n";
        cout << "5. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;
        cin.ignore(); // Clear input buffer

        switch (choice) {
            case 1:
                cout << "Enter Your Name: ";
                getline(cin, accountHolderName);
                cout << "Enter Your Account No: ";
                cin >> accountNo;
                cout << "Initial Deposit Amount: ";
                cin >> initialDeposit;
                b.setAccount(accountNo, accountHolderName, initialDeposit);
                cout << "Congratulations! Account Successfully Created." << endl;
                break;

            case 2:
                cout << "Enter Your Account No: ";
                cin >> accountNo;
                b.showAccountDetails(accountNo);
                break;

            case 3:
                cout << "Enter Your Account No: ";
                cin >> accountNo;
                cout << "Enter Amount to Deposit: ";
                cin >> amount;
                b.deposit(accountNo, amount);
                break;

            case 4:
                cout << "Enter Your Account No: ";
                cin >> accountNo;
                cout << "Enter Amount to Withdraw: ";
                cin >> amount;
                b.withdraw(accountNo, amount);
                break;

            case 5:
                cout << "Thank you for using the Bank system." << endl;
                return 0;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
}
