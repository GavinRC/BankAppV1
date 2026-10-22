#include <iostream>
// #include <stdexcept>
#include "BankAccount.h"

BankAccount::BankAccount(const std::string &accHolder, const std::string &accNum, const double &balance) {
    m_accHolder = accHolder;
    m_accNum = accNum;
    m_balance = balance;
}

BankAccount::~BankAccount() {
    // Cleanup of objects and resources that the object used
}

void BankAccount::deposit(const double amount) {
    if (amount > 0) {
        m_balance += amount;
    } else {
        // throw std::invalid_argument("Can't deposit");
        std::cout << "Can't deposit desired amount" << std::endl;
    }
}

bool BankAccount::withdraw(const double amount) {
    if (amount > 0 && (amount <= m_balance - 5.0)) {
        m_balance -= amount;
        return true;
    }
    return false;
}

void BankAccount::display() const {
    std::cout << std::endl;
    std::cout << "Client Name: " << m_accHolder << std::endl;
    std::cout <<"Account Number: " << m_accNum << std::endl;
    std::cout << "Account Balance: $" << m_balance << std::endl;
}