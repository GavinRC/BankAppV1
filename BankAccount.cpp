#include <iostream>
// #include <stdexcept>
#include "BankAccount.h"
#include <iomanip>

BankAccount::BankAccount(const std::string &accHolder, const std::string &accNum, const double balance) {
    m_accHolder = accHolder;
    m_accNum = accNum;
    m_balance = balance;
}

BankAccount::~BankAccount() {
    // Cleanup of objects and resources that the object used
    std::cout << "\nBank Account Object Deconstructed\n";
}

void BankAccount::deposit(double amount) {
    if (amount > 0) {
        m_balance += amount;
    } else {
        // throw std::invalid_argument("Can't deposit");
        std::cout << "Can't deposit desired amount\n";
    }
}

bool BankAccount::withdraw(double amount) {
    if (amount <= m_balance - 5.0) {
        m_balance -= amount;
        return true;
    }
    return false;
}

void BankAccount::display() {
    std::cout << std::setprecision(2) << std::fixed;
    std::cout << std::endl;
    std::cout << "Client Name: " << m_accHolder << std::endl;
    std::cout << "Account Number: " << m_accNum << std::endl;
    std::cout << "Account Balance $" << m_balance << std::endl;
}