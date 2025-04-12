#include <bits/stdc++.h>
using namespace std;
class B;  // This is needed
class A
{
  private: 
  int a;
 
  friend int sum(A,B); 

  public:
  A(int x){
    a = x;
  }
};

class B{
    private:
    int b;
    friend int sum(A,B);

    public:
    B(int x){
        b = x;
    }
};

int sum(A obj1,B obj2){
    return obj1.a + obj2.b;
}

int main()
{
    A obj1(2);
    B obj2(3);

    cout<< sum(obj1,obj2);   
    return 0;
}

// UPDATED CODE WITH SOME MORE DEPTH UNDERSTANDING
#include <bits/stdc++.h>
using namespace std;

class B;

class A
{
private:
    int x;
    friend int sum(A, B);
    friend int sum(A *, B *);

public:
    A(int a)
    {
        x = a;
    }
};
class B
{
private:
    int x;
    friend int sum(A, B);
    friend int sum(A *, B *);

public:
    B(int b)
    {
        x = b;
    }
};

int sum(A *ptrA, B *ptrB)
{
    return ptrA->x + ptrB->x;
}

int sum(A ptrA, B ptrB)
{
    return ptrA.x + ptrB.x;
}

int main()
{
    A obj1(2);
    B obj2(3);

    cout << sum(&obj1, &obj2);
    cout << sum(obj1, obj2);
}
