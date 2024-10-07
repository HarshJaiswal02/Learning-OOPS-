#include <bits/stdc++.h>
using namespace std;
// Data type --> primitive non-primitive

template <typename T>
class Complex
{

    T real, imaginary;

public:
    Complex() : real(0), imaginary(0)
    {
    }
    Complex(T real, T imaginary = 0)
    {
        cout << "Parametric called\n";
        this->real = real;
        this->imaginary = imaginary;
    }

    void display()
    {
        cout << "Real: " << real << " Imaginary: " << imaginary << endl;
    }

    operator T() // T will get replace by the value3 datatype and return
    {
        cout << "Casting operator\n";
        return (real);
    }
};
int main()
{
    // 1. Primitive to primitive
    int x = 5;
    float y;
    y = x + 2.2;
    cout << y << endl; // 7.2  typeId(y).name() = f

    float n = 23.2;
    int m = n + 2;
    cout << m << endl; // 25   typeId(m).name() = i

    // 2.primitive to Non-primitive(class type).
    // This is done using parametric constructor

    int xx = 4;
    Complex<int> obj;

    obj = xx;      // will it give error ? Ans is no it wont as i have declare a constructor already
                   // if i remove the Complex(parametric constructor) =  ERROR :no known conversion for argument 1 from 'int' to 'const Complex<int>&'
    obj.display(); // real = 4 imaginary = 0

    Complex<float> obj2; // being a float ...

    int value1 = 4;
    float value2 = 4.4;

    obj2 = value1;
    obj2.display(); // real = 4 imaginary = 0

    obj2 = value2;
    obj2.display(); // real = 4.4 imaginary = 0

    // 3. non-primitive(classType) to primitive
    // This is done using the "casting operator"

    int value3;
    value3 = obj2; // error: cannot convert 'Complex<int>' to 'int' in assignment
                   // to do this "casting operator" is used

    cout << "Value by : " << value3 << endl; // 4 | 4.4 depends of int or float of value3

    // 4. non-primitive to non-primitive (New code) classTo class

    return 0;
}