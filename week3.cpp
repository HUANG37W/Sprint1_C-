// Week3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <list>
#include "Account.h"

using namespace std;
using account::Account;

list<Account>::iterator find(list<Account>& accounts, int id_to_find)
{
    list<Account>::iterator it;
    for (it = accounts.begin(); it != accounts.end(); ++it)
    {
        if (it->get_id() == id_to_find)
            return it;
    }
    return it;
}

list<Account>::iterator prompt_account(list<Account>& accounts)
{
    cout << "Enter the ID of the account to find: ";
    int id;
    cin >> id;
    auto account_it = find(accounts, id);
    if (account_it == accounts.end()) {
        cout << "Account not found." << endl;
    }
    else {
        cout << "Found account: ";
        account_it->display();
    }
    return account_it;
}

int main()
{
    cout << fixed;
    cout << setprecision(2);

    list<Account> accounts;

    int choice = -1;
    double deposit;
    while (choice != 0) {
        cout << "Account Menu:" << endl;
        cout << "0. Quit Program" << endl;
        cout << "1. Display Account Information" << endl;
        cout << "2. Add a deposit to an account" << endl;
        cout << "3. Withdraw from an account" << endl;
        cout << "4. Add new account" << endl;
        cout << "5. Find account by ID" << endl;

        cout << "Your Choice: ";
        cin >> choice;
        if (choice == 1) {
            for (list<Account>::iterator it = accounts.begin(); it != accounts.end(); ++it)
            {
                it->display();
            }
        }
        else if (choice == 2) {
            auto account_it = prompt_account(accounts);
            if (account_it != accounts.end()) {
                cout << "Amount to deposit: ";
                float deposit;
                cin >> deposit;
                account_it->deposit(deposit);
            }
        }
        else if (choice == 3) {
            auto account_it = prompt_account(accounts);
            if (account_it != accounts.end()) {
                cout << "Amount to withdraw: ";
                float withdraw;
                cin >> withdraw;
                account_it->withdraw(withdraw);
            }
        }
        else if (choice == 4) {
            Account account;
            account.setup();
            accounts.push_back(account);
        }
        else if (choice == 5) {
            prompt_account(accounts);
        }

        cout << endl;
    }
}
