// ATM SYSTEM
#include <iostream>
using namespace std;

class ATM {
private:
    double balance;

public:

    ATM(double initial_balance) {
        balance = initial_balance;
    }


    void checkBalance() {
        cout << "Your current balance is: $" << balance << endl;
    }


    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "You have successfully deposited $" << amount << endl;
            checkBalance();
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }


    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "You have successfully withdrawn $" << amount << endl;
            checkBalance();
        } else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }
};

int main() {
    int option;
    double amount;
    ATM atm(1000.00);
    do {

        cout << "\n*** ATM SYSTEM MENU ***\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your option: ";
        cin >> option;

        switch (option) {
        case 1:
            atm.checkBalance();
            break;

        case 2:
            cout << "Enter the amount to deposit: $";
            cin >> amount;
            atm.deposit(amount);
            break;

        case 3:
            cout << "Enter the amount to withdraw: $";
            cin >> amount;
            atm.withdraw(amount);
            break;

        case 4:
            cout << "Thank you for using the ATM. Goodbye!" << endl;
            break;

        default:
            cout << "Invalid option! Please try again." << endl;
        }

    } while (option != 4);
    
}

