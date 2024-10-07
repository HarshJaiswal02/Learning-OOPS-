#include <bits/stdc++.h>
using namespace std;

// class Product; -> still it giving error // as the declaration of it methods are not declared

class Product
{
    int p, q;

public:
    Product(int p, int q)
    {
        this->p = p;
        this->q = q;
    }
    void showData()
    {
        cout << p << " " << q << endl;
    }

    int getP()
    {
        return p;
    }

    int getQ()
    {
        return q;
    }

    // operator Item();
};

class Item
{
    int a, b;

public:
    Item() {} // Default - to avoid error;

    Item(Product p)
    {
        cout << "class To class Conversion\n";
        a = p.getP();
        b = p.getQ();
    }
    void showData()
    {
        cout << a << " " << b << endl;
    }
    // friend Item Product::operator Item();
};

// Product::operator Item()
// {
//     Item temp;
//     temp.a = p;
//     temp.b = q;
//     return temp;
// }

int main()
{
    Product p(3, 5);
    Item i;
    i = p; // error: no match for 'operator=' (operand types are 'Item' and 'Product')
           // This assignment can be done using 1. Constructor implementation  - DONE IN class of LHS here Item
           //  2. Cast typing (- casting operator) - DONE IN class of RHS here Product
    cout << "Product: ";
    p.showData();
    cout << "Item: ";
    i.showData();

    // I have above implemented using a constructor now i have to implement using casting operator .Do this for me chatGPT
    // Product pp(4, 5);
    // Item ii;

    // ii = pp; // Using the casting operator again

    // cout << "Product: ";
    // pp.showData();
    // cout << "Item: ";
    // ii.showData();

    return 0;
}