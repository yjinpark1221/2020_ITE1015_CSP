class Account{
private:
    int accountId;
    int balance; // min 0 max 1000000
public:
    int getBalance();
    void setBalance(int);
    void setId(int);
    Account();
};
class AccountManager{
private:
    Account accountArray[10];
    int numberOfAccounts; // max 10
public:
    void create();
    void deposit(int, int);
    void withdraw(int, int);
    void transfer(int, int, int);
    void checkBalance(int);
    AccountManager();
};
