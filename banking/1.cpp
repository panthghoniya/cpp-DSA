#include<iostream>
using namespace std;

class BankAccount {
protected:
    int accNum;
    string accHolder;
    double accBal;

public:
    void setValues(int num, string holder, double bal) {
        accNum = num;
        accHolder = holder;
        accBal = bal;
    }
    void deposit(double amt) {
        if (amt > 0) {
            accBal += amt;
            cout << "New Balance: " << accBal << endl;
        } else {
            cout << "Invalid amount!" << endl;
        }
    }
    void withdraw(double amt) {
        if (amt <= accBal) {
            accBal -= amt;
            cout << "New Balance: " << accBal << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }
    double getBalance() {
        return accBal;
    }
    void displayInfo() {
        cout << "Account Number: " << accNum << endl;
        cout << "Account Holder: " << accHolder << endl;
        cout << "Balance: " << accBal << endl;
    }
};

class SavingAccount : public BankAccount {
public:
    void calcInterest(double rate) {
        double interest = (accBal * rate) / 100;
        cout << "Interest: " << interest << endl;
        cout << "Total Balance: " << accBal + interest << endl;
    }
};

class CheckingAccount : public BankAccount {
public:
    void checkOverdraft(double amt, double limit) {
        if (amt <= accBal + limit) {
            cout << "Overdraft Approved!" << endl;
        } else {
            cout << "Overdraft Limit Exceeded!" << endl;
        }
    }
};

class FixedDepositAccount : public BankAccount {
public:
    void calcFDInterest(double rate, double amt, int months) {
        if (amt <= accBal) {
            double interest = (amt * rate * months) / 100;
            cout << "FD Interest: " << interest << endl;
            cout << "Total FD Amount: " << amt + interest << endl;
        } else {
            cout << "FD Amount Exceeds Balance!" << endl;
        }
    }
};

int main() {
    int accNum, option, months;
    string accHolder;
    double accBal, amt, overdraftLimit;

    cout << "Enter Account Number: ";
    cin >> accNum;
    cout << "Enter Account Holder Name: ";
    cin >> accHolder;
    cout << "Enter Account Balance: ";
    cin >> accBal;

    SavingAccount savingAcc;
    savingAcc.setValues(accNum, accHolder, accBal);

    CheckingAccount checkingAcc;
    FixedDepositAccount fdAcc;

    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Display Info\n4. Calculate Interest\n5. Check Overdraft\n6. Fixed Deposit\n0. Exit\n";
        cout << "Choose an option: ";
        cin >> option;

        switch (option) {
        case 1:
            cout << "Enter Deposit Amount: ";
            cin >> amt;
            savingAcc.deposit(amt);
            break;
        case 2:
            cout << "Enter Withdraw Amount: ";
            cin >> amt;
            savingAcc.withdraw(amt);
            break;
        case 3:
            savingAcc.displayInfo();
            break;
        case 4:
            savingAcc.calcInterest(5);
            break;
        case 5:
            cout << "Enter Overdraft Limit: ";
            cin >> overdraftLimit;
            cout << "Enter Withdraw Amount: ";
            cin >> amt;
            checkingAcc.setValues(accNum, accHolder, savingAcc.getBalance());
            checkingAcc.checkOverdraft(amt, overdraftLimit);
            break;
        case 6:
            cout << "Enter FD Amount: ";
            cin >> amt;
            cout << "Enter FD Duration (months): ";
            cin >> months;
            fdAcc.setValues(accNum, accHolder, savingAcc.getBalance());
            fdAcc.calcFDInterest(7, amt, months);
            break;
        case 0:
            cout << "Thank you!" << endl;
            break;
        default:
            cout << "Invalid Option!" << endl;
        }
    } while (option != 0);

    return 0;
}