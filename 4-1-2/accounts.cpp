#include "accounts.h"
#include <iostream>
Account::Account() {
    accountId = 0;
    balance = 0;
}
int Account::getBalance() {return balance;}
void Account::setBalance(int b) {balance = b;}
void Account::setId(int id) {accountId = id;}

AccountManager::AccountManager() {
    numberOfAccounts = 0;
}
void AccountManager::create() {
    if (numberOfAccounts >= 10) {  // !!! number of accounts exceeding
        std::cout << "Failure!\n";
        return;
    }
    int n = numberOfAccounts;
    accountArray[n].setId(n);
    accountArray[n].setBalance(0);
    ++numberOfAccounts;
    std::cout << "Success!\n";
    checkBalance(n);
}
void AccountManager::deposit(int id, int amount) {
    if (id > numberOfAccounts - 1 || id < 0) { // !!! || ??? approaching error
        std::cout <<"Failure!\n";
        return;
    }
    if (amount < 0) { // ??? amount error
        std::cout << "Failure!\n";
        checkBalance(id);
        return;
    }
    int temp = accountArray[id].getBalance() + amount;
    if (temp > 1000000) { // !!! balance limit error
        std::cout << "Failure!\n";
        checkBalance(id);
        return;
    }
    accountArray[id].setBalance(temp);
    std::cout <<"Success!\n";
    checkBalance(id);
}
void AccountManager::withdraw(int id, int amount) {
    if (id > numberOfAccounts - 1 || id < 0) { // !!! || ??? approaching error
        std::cout << "Failure!\n";
        return;
    }
    if (amount < 0) { // ??? amount error
        std::cout << "Failure!\n";
        checkBalance(id);
        return;
    }
    int temp = accountArray[id].getBalance() - amount;
    if (temp < 0) { // !!! balance limit error
        std::cout << "Failure!\n";
        checkBalance(id);
        return;
    }
    accountArray[id].setBalance(temp);
    std::cout << "Success!\n";
    checkBalance(id);
}
void AccountManager::transfer(int from, int to, int amount) {
    if (from > numberOfAccounts - 1 || from < 0 || to > numberOfAccounts - 1 || to < 0) {
        std::cout << "Failure!\n"; // !!! || ??? approaching error
        return;
    }
    if (amount < 0) { // ??? amount error
        std::cout << "Failure!\n";
    }
    else {
        int temp1 = accountArray[from].getBalance() - amount;
        int temp2 = accountArray[to].getBalance() + amount;
        if (temp1 < 0 || temp2 > 1000000) { // !!! balance limit error
            std::cout <<"Failure!\n";
        }
        else {
            accountArray[from].setBalance(temp1);
            accountArray[to].setBalance(temp2);
            std::cout<<"Success!\n";
        }
    }
    int min, max;
    if (from < to) {
        min = from;
        max = to;
    }
    else if (from > to) {
        min = to;
        max = from;
    }
    else { // ??? transfer to oneself
        checkBalance(from);
        return;
    }
    checkBalance(min);
    checkBalance(max);

}
void AccountManager::checkBalance(int id) {
    std::cout << "Balance of user " << id << ": " << accountArray[id].getBalance() << "\n"; 
}
