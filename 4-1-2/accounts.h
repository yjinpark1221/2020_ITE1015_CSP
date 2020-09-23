class Account{
private:
    int accountId;
    int balance; // min 0 max 1000000
public:
    Account();
    int getId();
    int getBalance();
    void setId(int);
    void setBalance(int);
};
class AccountManager{
private:
    Account accountArray[10];
    int numberOfAccounts; // max 10
public:
    AccountManager();
    void create();
    void deposit(int, int);
    void withdraw(int, int);
    void transfer(int, int, int);
    void checkBalance(int);
};
