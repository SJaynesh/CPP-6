#include <iostream>
using namespace std;

/*
    class        : Diffrent
    Mathods Name : Same
    Parameteres  : Same
*/

class Addition
{
public:
    void addition(int m, int n)
    {
        cout << m << " + " << n << " = " << m + n << endl;
    }
};

class Sum : public Addition
{
public:
    void addition(int x, int y)
    {
        cout << "Addition of " << x << " and " << y << " is ans for " << x + y << endl;
        Addition::addition(x, y);
    }
};

int main()
{
    Sum s1;

    s1.addition(25, 5);

    // s1.Addition::addition(25, 5);
}