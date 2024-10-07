#include <iostream>
using namespace std;
// diamond problem
class BaseClass
{
   int arr[10];
};

class DerivedBaseClass1 : public virtual BaseClass
{
};

class DerivedBaseClass2 : public virtual BaseClass
{
};

class DerivedClass : public DerivedBaseClass1, public DerivedBaseClass2
{
};

int main(void)
{
   cout << sizeof(DerivedClass);
   return 0;
}

// Effect of Virtual Inheritance:

// When a class inherits a base class virtually, a pointer (called a virtual table pointer or vptr) is added to the derived class to manage the virtual inheritance mechanism.
// Each virtual inheritance introduces a vptr, which is usually 8 bytes on 64-bit systems (or 4 bytes on 32-bit systems).
// Since both DerivedBaseClass1 and DerivedBaseClass2 inherit from BaseClass virtually, this adds two vptrs (one for each virtual inheritance).


// Breakdown of Memory:
// BaseClass:

// Size of arr[10]: 40 bytes.
// DerivedBaseClass1:

// Virtually inherits BaseClass. Adds a vptr (typically 8 bytes) to manage the virtual inheritance.
// DerivedBaseClass2:

// Virtually inherits BaseClass. Adds another vptr (typically 8 bytes) for its own virtual inheritance.
// DerivedClass:

// Inherits from both DerivedBaseClass1 and DerivedBaseClass2, but only one instance of BaseClass is present due to virtual inheritance.
// So, the memory layout includes:
// One instance of BaseClass: 40 bytes.
// Two virtual table pointers: 8 + 8 = 16 bytes (one for each of DerivedBaseClass1 and DerivedBaseClass2).

// 40 bytes (for BaseClass) + 8 bytes (vptr for DerivedBaseClass1) + 8 bytes (vptr for DerivedBaseClass2) = 56 bytes.