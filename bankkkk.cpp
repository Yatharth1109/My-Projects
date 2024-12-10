#include <iostream>
using namespace std;

// Define a structure for Account
struct Account {
    long acc_no;
    int pin;
    int balance;
    string name;
    string phone;
};

// Banking system class
class Bank {
public:
    void menu(int bal) {
        cout << "\n1. Withdraw                        # Current balance : " << bal << "/-\n"
             << "2. Deposit\n"
             << "3. Account Detail\n"
             << "4. Transfer Money\n"
             << "5. Exit option !!                  # Press the number to execute : ";
    }

    int withdraw(int bal) {
        int amount;
        cout << "\nEnter the amount to withdraw: ";
        cin >> amount;
        if (amount <= bal) {
            bal -= amount;
            cout << "\nWithdrawal successful!!\n";
            cout << "Your Total Balance : " << bal << endl;
        } else {
            cout << "\nInsufficient Balance.\n";
        }
        return bal;
    }

    int deposit(int bal) {
        int amount;
        cout << "\nEnter the amount to deposit: ";
        cin >> amount;
        bal += amount;
        cout << "\nDeposit successful!!\n";
        cout << "Your Total Balance : " << bal << endl;
        return bal;
    }

    void account_detail(const string &name, long acc_no, const string &phone, int bal) {
        cout << "\n-------------------------------------\n"
             << "   Account Holder : " << name << "\n"
             << "   Account Number : " << acc_no << "\n"
             << "    Mobile Number : " << phone << "\n"
             << "     Total Amount : " << bal << "\n"
             << "-------------------------------------\n";
    }

    int transfer(int bal, int &target_balance) {
        int amount;
        cout << "\nEnter the amount to transfer: ";
        cin >> amount;
        if (amount <= bal) {
            bal -= amount;
            target_balance += amount;
            cout << "\nTransfer successful!!\n";
        } else {
            cout << "\nInsufficient Balance.\n";
        }
        return bal;
    }
};

int main() {
    Bank bank;

    // Create an array of accounts
    const int num_accounts = 3;
    Account accounts[num_accounts] = {
        {123456789, 1212, 5000, "Professor", "+91-4201235478"},
        {987654321, 2121, 8000, "Doctor", "+91-6024820012"},
        {1122334455, 1122, 1000, "Teacher", "+91-8203210092"}
    };

    cout << "************************ Tsunami Bank of Hawaii ************************" << endl;

    while (true) {
        long acc_no;
        cout << "\nEnter Account Number: ";
        cin >> acc_no;

        // Find the account
        int acc_index = -1;
        for (int i = 0; i < num_accounts; ++i) {
            if (accounts[i].acc_no == acc_no) {
                acc_index = i;
                break;
            }
        }

        if (acc_index != -1) {
            int pin;
            cout << "Enter Pin Number: ";
            cin >> pin;

            if (accounts[acc_index].pin == pin) {
                while (true) {
                    bank.menu(accounts[acc_index].balance);

                    int option;
                    cin >> option;

                    if (option == 1) { // Withdraw
                        accounts[acc_index].balance = bank.withdraw(accounts[acc_index].balance);
                    } else if (option == 2) { // Deposit
                        accounts[acc_index].balance = bank.deposit(accounts[acc_index].balance);
                    } else if (option == 3) { // Account Detail
                        bank.account_detail(
                            accounts[acc_index].name,
                            accounts[acc_index].acc_no,
                            accounts[acc_index].phone,
                            accounts[acc_index].balance
                        );
                    } else if (option == 4) { // Transfer Money
                        cout << "\n# Transfer Money to: 1. Doctor\n                     2. Teacher\n# Select Account: ";
                        int choice;
                        cin >> choice;

                        if (choice == 1 || choice == 2) {
                            int target_index = (choice == 1) ? 1 : 2;
                            accounts[acc_index].balance = bank.transfer(
                                accounts[acc_index].balance,
                                accounts[target_index].balance
                            );
                        } else {
                            cout << "\nInvalid account.\n";
                        }
                    } else { // Exit
                        cout << "\nExiting...\n";
                        break;
                    }

                    cout << "\n# Press 1 to continue / 0 to end: ";
                    int cont;
                    cin >> cont;
                    if (cont != 1) break;
                }
            } else {
                cout << "\nIncorrect Pin Number.\n";
            }
        } else {
            cout << "\nIncorrect Account Number.\n";
        }

        cout << "\nEnter 1 to Login another account / 0 to end: ";
        int again;
        cin >> again;
        if (again != 1) break;
    }

    return 0;
}

