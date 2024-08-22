#include <iostream>
using namespace std;

class Demo
{
    int a;

public:
    void setData()
    {
        cout << endl
             << "Enter a : ";
        cin >> this->a;
    }

    void getData()
    {
        cout << endl
             << "A\t: " << this->a << endl;
    }

    Demo operator++(int n)
    {
        Demo tmp;

        tmp.a = this->a++;

        return tmp;
    }

    Demo operator--()
    {
        Demo tmp;

        tmp.a = --this->a; // 9

        return tmp;
    }
};

int main()
{
    Demo d1, d2;

    d1.setData(); // d1 : [a : 10]

    // Post Increment
    d2 = d1++; // d1 + 1 // d1.operator++(1)

    d1.getData(); // a: 11
    d2.getData(); // a: 10

    d1.setData(); // d1 [a : 10]

    // Pre Decrement
    d2 = --d1; // 1 - d1 // d1.operator--()

    d1.getData(); // a: 9
    d2.getData(); // a: 9
}