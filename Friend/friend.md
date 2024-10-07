Friend function is not the member function of a class to which it is friend.

keyword - friend
friend return-type functionName(){...}

It must be defined outside the class

Friend function can access any of the member of class to which it is friend. It cannot access members of the class directly.

It has no caller object

It should not be defined with membership label

Benefit of friend function. 
1. friend function can become friend to more than one class.
2. overloading of operators using friend function.