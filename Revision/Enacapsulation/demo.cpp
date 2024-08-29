#include <iostream>
#include <string.h>
using namespace std;

class Demo
{
    int d;
    char name[20];

public:
    // Default Constructor
    Demo()
    {
        cout << endl
             << "I am Default Constructor......" << endl
             << endl;
    }
    // Parametrized Constructor
    Demo(int d, char name[])
    {
        this->d = d;
        strcpy(this->name, name);
    }

    // Copy Constructor
    Demo(Demo &a)
    {
        this->d = a.d;
        strcpy(this->name, a.name);
    }

    // Getter
    void getData()
    {
        cout << "D\t: " << this->d << endl;
        cout << "Name\t: " << this->name << endl;
    }
};

int main()
{
    Demo d1;

    Demo d2(25, "Niranjan");

    d2.getData();

    Demo d3 = d2; // Implicit Copy Constructor

    d3.getData();

    Demo d4(d2); // Explicit Copy Constructor

    d4.getData();
}