#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    // Complex(){} //Why writing this constructor is so so much important ... creating Complex ans;
    // In your Complex class, the default constructor Complex() {} is important because if you do not explicitly provide any constructor, the compiler will automatically generate a default constructor. However, when you define a custom constructor, like Complex(int a, int b), the compiler will no longer generate a default constructor.
    // This means if you try to create a Complex object without providing any arguments (like in your overloaded operators where you're creating a Complex ans;), the program will fail to compile unless the default constructor is explicitly provided.
    void display()
    {
        cout << this << ":The complex value is " << this->real << " + " << this->imaginary << "i\n";
    }

    Complex(int a, int b)
    {
        real = a;
        imaginary = b;
    }

    Complex operator+(Complex C)
    {
        Complex ans(real + C.real, imaginary + C.imaginary);
        return ans;
    }

    Complex operator-(Complex C)
    {
        Complex ans(real - C.real, imaginary - C.imaginary);
        return ans;
    }

    Complex operator*(Complex C)
    {
        this->display();
        cout << "Value\n";
        Complex ans(real * C.real, imaginary * C.imaginary);
        return ans;
    }
};

int main()
{
    cout << "Operator Overloading\n";
    Complex n1(2, 3);
    Complex n2(4, 6);

    n1.display();
    n2.display();

    Complex n3 = n1 + n2;
    n3.display();

    Complex n4 = n2 - n1;
    n4.display();

    Complex n5 = n1 * n2;
    n5.display();
    return 0;
}