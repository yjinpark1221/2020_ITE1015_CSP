#include "accounts.h"
#include <iostream>
Account::Account() {
    this -> accountId = 0;
    this -> balance = 0;
}
int Account::getId() {
    return this -> accountId;
}
int Account::getBalance() {
    return this -> balance;
}
void Account::setId(int id) {
    this -> accountId = id;
}
void Account::setBalance(int b) {
    this -> balance = b;
}

AccountManager::AccountManager() {
    this -> numberOfAccounts = 0;
}
void AccountManager::create() {
    if (this -> numberOfAccounts >= 10) {  
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
    if (id >= this -> numberOfAccounts || id < 0) { 
        std::cout <<"Failure!\n";
        return;
    }
    int temp = this -> accountArray[id].getBalance() + amount;
    if (temp > 1000000) { 
        std::cout << "Failure!\n";
        this -> checkBalance(id);
        return;
    }
    this -> accountArray[id].setBalance(temp);
    std::cout << "Success!\n";
    this -> checkBalance(id);
}
void AccountManager::withdraw(int id, int amount) {
    if (id >= this -> numberOfAccounts || id < 0) { 
        std::cout << "Failure!\n";
        return;
    }
    int temp = this -> accountArray[id].getBalance() - amount;
    if (temp < 0) { 
        std::cout << "Failure!\n";
        this -> checkBalance(id);
        return;
    }
    this -> accountArray[id].setBalance(temp);
    std::cout << "Success!\n";
    this -> checkBalance(id);
}
void AccountManager::transfer(int from, int to, int amount) {
    if (from >= this -> numberOfAccounts  || from < 0 || to >= this -> numberOfAccounts || to < 0) {
        std::cout << "Failure!\n";
        return;
    }
    else {
        int temp1 = this -> accountArray[from].getBalance() - amount;
        int temp2 = this -> accountArray[to].getBalance() + amount;
        if (temp1 < 0 || temp2 > 1000000) { 
            std::cout << "Failure!\n";
        }
        else {
            this -> accountArray[from].setBalance(temp1);
            this -> accountArray[to].setBalance(temp2);
            std::cout << "Success!\n";
        }
    }
    int t1, t2;
    if (from < to) {
        t1 = from;
        t2 = to;
    }
    else {
        t1 = to;
        t2 = from;
    }
    this -> checkBalance(t1);
    this -> checkBalance(t2);

}
void AccountManager::checkBalance(int id) {
    std::cout << "Balance of user " << id << ": " << this -> accountArray[id].getBalance() << "\n"; 
}
