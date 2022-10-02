#include "Account.h"
#include <iostream>

using account::Account;
using std::cout;
using std::cin;
using std::endl;

int Account::id_number_global = 0;

Account::Account() : id_number(id_number_global++), name(""), balance(0.0) {}

void Account::setup() {
    cout << "Enter the name: ";
    cin >> name;
    cout << "Enter the balance: ";
    cin >> balance;
}

void Account::display() const {
    cout << "Account ID: " << id_number << "  Name: " << name << "  Balance: $" << balance << endl;
}

void account::Account::deposit(float d)
{
    balance += d;
}

void account::Account::withdraw(float w)
{
    balance -= w;
}

int account::Account::get_id()
{
    return id_number;
}
