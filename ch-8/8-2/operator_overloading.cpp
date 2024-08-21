#include <iostream>
using namespace std;

/*

    Operator :
        1) Unary : ++ ,  --
        2) Binary : +, -, *, /, %, >, <, etc.

        Built In Datatype : Int, Char, Float, Double, Long

        10 + 20

        class => User Define Datatype

        d1 + d2 forcefully operation
                |
                |
        Operator Oveloading :
            Unary Operator Overloading  :
            Binary Operator Overloading :
*/

class Demo
{
    int a;

public:
    // setter
    void set()
    {
        cout << endl;
        cout << "Enter a: ";
        cin >> this->a;
    }

    // getter
    void get(string objName)
    {
        cout << objName << " of A\t: " << this->a << endl;
    }

    Demo operator+(Demo n)
    {
        Demo tmp;

        tmp.a = this->a + n.a;
        // tmp [a : 15]      = 15

        return tmp;
    }
    Demo operator-(Demo n)
    {
        Demo tmp;

        tmp.a = this->a - n.a;

        return tmp;
    }
};

int main()
{
    int a = 10, b = 5;

    int c = a + b; // 10 + 5

    Demo d1, d2, d3;

    d1.set(); // d1 [a : 5]
    d2.set(); // d2 [a : 10]

    d3 = d1 + d2; // d1.operator+(d2);

    // d3 [a : 15]

    d1.get("d1");
    d2.get("d2");
    d3.get("d3");

    d3 = d1 - d2;

    d1.get("d1");
    d2.get("d2");
    d3.get("d3");
}