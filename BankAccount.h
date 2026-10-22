//
// Created by gavin on 10/15/2026.
//

#ifndef BANKAPPV1_BANKACCOUNT_H
#define BANKAPPV1_BANKACCOUNT_H
#include <string>

class BankAccount {
    std::string m_accHolder;
    std::string m_accNum;
    double m_balance = 0;

    public:
    BankAccount(const std::string &accHolder, const std::string &accNum, const double &balance);
    ~BankAccount(); // Default Constructor
    void deposit(double amount);
    bool withdraw(double amount);
    void display() const;
};


#endif //BANKAPPV1_BANKACCOUNT_H
