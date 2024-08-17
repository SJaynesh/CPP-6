#include <iostream>
using namespace std;

/*
    class        : Same
    Mathods Name : Same
    Parameteres  : Different
*/

class Math
{
public:
    void sum()
    {
        cout << "ADDITION" << endl
             << endl;
    }
    void sum(int a)
    {
        cout << "A\t: " << ++a << endl;
    }

    void sum(int a, int b)
    {
        cout << "A\t: " << a << endl
             << "B\t: " << b << endl
             << "Sum\t: " << a + b << endl;
    }

    void sum(float a, float b)
    {
        cout << "A\t: " << a << endl
             << "B\t: " << b << endl
             << "Sum\t: " << a + b << endl;
    }
};

int main()
{
    Math m1;

    m1.sum();
    m1.sum(25, 35);
    m1.sum(25.5f, 35.5f);
}