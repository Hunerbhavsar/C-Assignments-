#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount(int accNo, string name, double bal) {
        accountNumber = accNo;
        accountHolderName = name;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << ", New Balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount > balance)
            cout << "Insufficient funds!\n";
        else {
            balance -= amount;
            cout << "Withdrawn: " << amount << ", New Balance: " << balance << endl;
        }
    }

    void display() {
        cout << "Account No: " << accountNumber << ", Name: " << accountHolderName 
             << ", Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc1(101, "Alice", 5000);
    acc1.display();
    acc1.deposit(2000);
    acc1.withdraw(3000);
    acc1.withdraw(5000);
}
