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