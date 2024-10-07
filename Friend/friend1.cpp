#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int a, b;

public:
    void display()
    {
        cout << "A: " << a << " B: " << b << endl;
    }

    void setData(int x, int y)
    {
        a = x;
        b = y;
    }

    friend int sum(Complex); // It must be defined outside the class
                            // Friend function is not the member function of a class to which it is friend.
};

// int Complex :: sum () // ! It should not be defined with membership label

int sum(Complex c)
{
    // return a+b;  //!It cannot access members of the class directly.
    return c.a + c.b; // Friend function can access any of the member of class to which it is friend
}
int main()
{
    Complex obj, obj2;
    obj.setData(1, 2);
    obj2.setData(3, 4);

    // sum()  //* It has no caller object

    int x = sum(obj2);
    cout<<x;
    return 0;
}