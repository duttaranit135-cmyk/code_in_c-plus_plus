#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance; // hidden implementation detail

public:
    BankAccount(double amount)
    {
        balance = amount;
    }

    void deposit(double amount)
    {
        balance += amount;
    }

    double getBalance()
    {
        return balance;
    }
};

int main()
{
    BankAccount account(1000);

    account.deposit(500);

    cout << "Balance: " << account.getBalance();

    return 0;
}