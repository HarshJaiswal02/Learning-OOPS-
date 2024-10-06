#include <bits/stdc++.h>

using namespace std;
class Animal
{
public:
    Animal()
    {
        cout << "Default Constructor Animal\n";
    }
    virtual void speak()
    {
        cout << "Animal Speaking :Huu\n";
    }
};

class Dog : public Animal
{
public:
    Dog()
    {
        cout << "Default Constructor Dog\n";
    }
    void speak()
    {
        cout << "Dog speaking : bark\n";
    }
};

class Cat : public Dog
{
public:
    Cat()
    {
        cout << "Default Constructor Cat\n";
    }
    void speak()
    {
        cout << "Dog speaking : meow meow\n";
    }
};

int main()
{
    cout << "Virtual function Ram Katha\n";

    Animal *p;
    // cout<<"What the hell happens\n";
    // p->speak();

    // When now this written p->speak after making a virtual function the program stops after printing Virtual function...\n
    //  What the hell happens
    // Why this happens?

    cout << "Pointer p address: " << p << endl;

    p = new Cat();

    cout << "Pointer p address After update to Cat -> " << p << endl;

    p->speak();

    p = new Animal();

    cout << "Pointer p address After update to Animal -> " << p << endl;
    p->speak();

    Animal *q;
    vector<Animal*> animals;

    animals.push_back(new Dog());
    animals.push_back(new Cat());
    animals.push_back(new Animal());
    animals.push_back(new Cat());
    animals.push_back(new Dog());

    for (int i = 0; i < animals.size(); i++)
    {
        q = animals[i];
        q->speak();
    }
    return 0;
}