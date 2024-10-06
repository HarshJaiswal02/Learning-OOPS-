#include <bits/stdc++.h>
using namespace std;

// CUSTOM ERROR CLASS
class InvalidInputAmount : public runtime_error
{
public:
    InvalidInputAmount(const string &msg) : runtime_error(msg)
    {
    }
};
class Customer
{
private:
    string name;
    int balance, accountNumber;

public:
    Customer(string name, int accountNumber, int balance)
    {
        this->name = name;
        this->accountNumber = accountNumber;
        this->balance = balance;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << amount << "Rs. Amount successfully credited\n";
        }
        else
        {
            cout << "Negative amount not valid";
        }
    }

    void withdraw(int amount)
    {
        if (amount > 0 && amount < balance)
        {
            balance -= amount;
            cout << amount << "Rs. Amount successfully withdrawn\n";
        }
        else
        {
            if (amount < 0)
                cout << "Negative amount not valid";
            else
            {
                cout << "Not enough amount";
            }
        }
    }
};

// The above class of customer can have good error handling code below
class Account
{
private:
    int amount;

public:
    Account(int amount)
    {
        if (amount < 0)
        {
            throw "Error amount need to be positive";
        }
        this->amount = amount;
    }
    void display()
    {
        cout << "Current balance: " << this->amount << endl;
    }

    void deposit(int amount)
    {
        if (amount < 0)
        {
            throw "Error amount need to be positive";
        }
        this->amount += amount;
    }

    void withdraw(int amount)
    {
        if (amount < 0 || amount > this->amount)
        {
            throw InvalidInputAmount("Not enough balance to withdraw such amount");
        }
        this->amount -= amount;
    }
};

int main()
{

    try
    {
        Account harsh(500);
        harsh.display();

        harsh.deposit(100);
        harsh.display();

        harsh.withdraw(599);
        harsh.display();
    }
    catch (const char *e)
    {
        cout << "Error: " << e;
    }
    // catch (className handling variable){
    //  ....
    //  ....
    //  ....
    // }
    // This will throw a error... terminate called after throwing an instance of 'std::bad_alloc' what() : std::bad_alloc

    //                                                                                                         There are exception class defined in c++;
    // exception class is a parent class

    // some derived class are->bad_alloc,
    // runtime_error

    try
    {

        int *p = new int[100000000000000];
        cout << "Memory allocated successfully";
        delete[] p;
    }
    catch (const exception &e)
    {
        cout << "Error Occurred: " << e.what() << endl;
    }

    try
    {
        int *p = new int[100000000000000];
        cout << "Memory allocated successfully";
        delete[] p;
    }
    catch (const bad_alloc &e)
    {
        cout << "Error Occurred: " << e.what() << endl;
    }
    catch (const runtime_error &r)
    {
        cout << "Runtime error" << r.what() << endl;
    }
    catch (...) // default error handler...
    {
        cout << "Default catch\n";
    }

    try
    {
        Account harsh(500);
        harsh.display();

        harsh.deposit(100);
        harsh.display();

        harsh.withdraw(601);
        harsh.display();
    }
    catch (const InvalidInputAmount &i)
    {
        cout << "CUSTOM ERROR CLASS: " << i.what() << endl;
    }
}