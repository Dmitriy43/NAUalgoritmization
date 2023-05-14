#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string lastName;
    string firstName;
    string lastOperationDate;
    double depositAmount;

public:
    BankAccount(string lastName, string firstName, string lastOperationDate, double depositAmount) {
        this->lastName = lastName;
        this->firstName = firstName;
        this->lastOperationDate = lastOperationDate;
        this->depositAmount = depositAmount;
    }

    string getLastName() {
        return lastName;
    }

    string getFirstName() {
        return firstName;
    }

    string getLastOperationDate() {
        return lastOperationDate;
    }

    double getDepositAmount() {
        return depositAmount;
    }

    void setLastName(string lastName) {
        this->lastName = lastName;
    }

    void setFirstName(string firstName) {
        this->firstName = firstName;
    }

    void setLastOperationDate(string lastOperationDate) {
        this->lastOperationDate = lastOperationDate;
    }

    void setDepositAmount(double depositAmount) {
        this->depositAmount = depositAmount;
    }

    void printAccount() {
        cout << "Last name: " << lastName << endl;
        cout << "First name: " << firstName << endl;
        cout << "Last operation date: " << lastOperationDate << endl;
        cout << "Deposit amount: " << depositAmount << endl;
    }
};

int main() {
    BankAccount account("Ivanov", "Ivan", "2022-05-14", 50000);
    account.printAccount();

    account.setLastName("Petrov");
    account.setDepositAmount(60000);

    cout << "Last name: " << account.getLastName() << endl;
    cout << "Deposit amount: " << account.getDepositAmount() << endl;

    return 0;
}
