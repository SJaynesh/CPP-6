#include <iostream>
using namespace std;

// Multilevel Intritance

class A
{
public:
    void getA()
    {
        cout << "Now a Class A...." << endl;
    }
};

class B : public A
{
public:
    // getA();
    void getB()
    {
        cout << "Now a Class B...." << endl;
    }
};

// Child Class
class C : public B
{
public:
    // getA();
    // getB();
    void getC()
    {
        cout << "Now a Class C...." << endl;
    }
};

int main()
{
    C c1;

    c1.getA();
    c1.getB();
    c1.getC();
}