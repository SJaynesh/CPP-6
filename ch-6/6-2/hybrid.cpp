#include <iostream>
using namespace std;

class A
{
public:
    void getA()
    {
        cout << "Class A..." << endl;
    }
};
class B : public A
{
public:
    // getA();
    void getB()
    {
        cout << "Class B..." << endl;
    }
};
class C : public A
{
public:
    // getA();
    void getC()
    {
        cout << "Class C..." << endl;
    }
};
class D : public B, public C
{
public:
    // B getA()
    // C getA()
    // getB()
    // getC()
    void getD()
    {
        cout << "Class D..." << endl;
    }
};

int main()
{
    D d1;

    d1.B::getA();
    d1.getB();
    d1.getC();
    d1.getD();
}