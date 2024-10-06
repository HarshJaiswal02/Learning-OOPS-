Rules for virtual functions
1.They cannot be static : they depend on the specific instance of an object.
2.They are accessed by object pointers
3.Virtual functions can be a friend of another class
4.A virtual function in the base class might not be used.
5.If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class

Virtual functions provide runtime polymorphism by allowing derived classes to override functions from the base class.
They can be accessed via base class pointers or references, allowing flexibility in handling objects of different types at runtime.
They can be friends of other classes, enabling them to access private members if needed.
Not every derived class has to override a virtual function from the base class — if not overridden, the base class version will be used.