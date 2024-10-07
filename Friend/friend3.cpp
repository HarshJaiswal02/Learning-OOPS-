// It has no caller object
// Since friend function has no caller object to maintain this feature we have to pass both the operands as arguments
// one increase -> caller object becomes argument...
// in unary a++(Complex ,int) or ++a (Complex),

#include <bits/stdc++.h>
using namespace std;

class Complex
{

    int r, i;

public:
    Complex() : r(0), i(0) {}
    Complex(int a, int b) : r(a), i(b)
    {
    }

    friend Complex operator+(Complex, Complex);

    friend void display(Complex);
};

void display(Complex X)
{
    cout << "Real: " << X.r << " Imaginary: " << X.i << endl;
}
Complex operator+(Complex X, Complex Y)
{
    Complex ans;
    ans.r = X.r + Y.r;
    ans.i = X.i + Y.i;
    return ans;
}
int main()
{
    Complex o1(2, 5), o2(4, 4);
    display(o1);
    display(o2);
    Complex c3 = o1 + o2;
    display(c3);

    return 0;
}