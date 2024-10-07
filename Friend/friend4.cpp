// Member function of one class can become a friend of another class
#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void fun()
    {
        //.....
    }

    void foo(){
        // .....
    } 

    // ....Many more functions
};

class B
{

    // friend void A::fun();
    // friend void A::foo();
    //.
    //.
    //... many function being friend then make class A a friend of B

    friend class A;
};

void fun()
{
}
void main()
{

    return 0;
}
