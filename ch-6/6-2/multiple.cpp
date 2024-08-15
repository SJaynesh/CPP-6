#include <iostream>
using namespace std;

// Multiple Inheritance
class A
{
public:
    void print()
    {
        cout << "Class A" << endl;
    }
};

class B
{
public:
    void print()
    {
        cout << "Class B" << endl;
    }
};

// child class
class C : public A, public B
{
public:
    void printC()
    {
        cout << "Class C" << endl;
    }
};

int main()
{
    C c1;

    c1.A::print();
    c1.B::print();
    c1.printC();
}