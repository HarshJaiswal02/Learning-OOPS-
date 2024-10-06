#include <bits/stdc++.h>
using namespace std;

class Customer
{
    const int accountNo;
    int amount;
    string name;

public:
    static int totalMembers;
    Customer(string name, int accountNo, int amount) : accountNo(accountNo) //! To assign value to const data member "initializer list" is used
    {
        this->name = name;
        this->amount = amount;
        // this->accountNo = accountNo; ❌ error : increment of read-only member 'Customer::accountNo' use "initializer list"
        totalMembers++;
    }
    void display()
    {   
        // amount++; ✔️valid
        // accountNo++; "❌ error : increment of read-only member 'Customer::accountNo'"
        cout << "Name:" << name << " contains " << amount << "Rs. with accountNo: " << accountNo << endl;
        cout << totalMembers << endl; // normal member can access static as well as normal members
    }

    static void accessStatic()
    {
        // static member fuction only able to access static members
        cout << "Total: " << totalMembers << endl;
    }
};

int Customer ::totalMembers = 0;

int main()
{

    Customer obj1("Harsh", 1, 2000);
    Customer obj2("Lakshya", 2, 3000);
    Customer obj3("Tarun", 3, 1000);

    cout << "Total members: " << Customer::totalMembers << endl; //! cannot access in private , I have to bring it down to public

    //* To access it private static member i have to use the static function

    obj1.display();

    Customer::accessStatic();
    return 0;
}