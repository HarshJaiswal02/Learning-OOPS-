#include <bits/stdc++.h>
using namespace std;

class Integer
{
private:
    int i;

public:
    Integer()
    {
        i = 0;
    }

    Integer(int x)
    {
        i = x;
    }

    Integer operator++() // Pre
    {

        Integer temp;
        temp.i = ++i;
        return temp;
    }

    Integer operator++(int) // post
    {
        Integer temp;
        temp.i = i++;
        return temp;
    }

    int show()
    {
        return i;
    }
};

int main()
{

    Integer i1;
    Integer i2;
    cout << "i1: " << i1.show() << endl;
    cout << "i2: " << i1.show() << endl;

    i2 = i1++;
    cout << "i1: " << i1.show() << endl;
    cout << "i2: " << i2.show() << endl;

    return 0;
}