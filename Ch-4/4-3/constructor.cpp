#include <iostream>
#include <string.h>
using namespace std;

class City
{
private:
    int pincode;
    char name[100];

public:
    // Default Constructor
    City()
    {
        cout << "Welcome my City..." << endl;
    }

    // Parameterized Constructor
    City(int pincode, char name[])
    {
        this->pincode = pincode;
        strcpy(this->name, name);
    }

    // Copy Constructor
    City(City &n)
    {
        this->pincode = n.pincode;
        strcpy(this->name, n.name);
    }

    void getCity()
    {
        cout << this->pincode << " " << this->name << endl;
    }
};

int main()
{
    City c;
    City c1(1174, "Baroda");
    City c2(4563, "Surat");
    City c3 = c1; // Implicit Copy Constructor
    City c4(c2);  // Explicit Copy Construcor

    c1.getCity();
    c2.getCity();
    c3.getCity();
    c4.getCity();

    // cout << c2.pincode << endl;
}