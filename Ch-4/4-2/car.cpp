#include <iostream>
#include <string.h>
using namespace std;

class Car
{
private:

    // Attributes == Data Members
    int id;
    char name[20];
    char color[20];
    char company[20];

public:
    // setter
    void setCarData()
    {
        cout << endl
             << endl;
        cout << "Enter car id: ";
        cin >> id;
        fflush(stdin);
        cout << "Enter car name: ";
        gets(name);
        cout << "Enter car color: ";
        gets(color);
        cout << "Enter car company: ";
        gets(company);

        // this->getCarData(); // Nasted Member Function
    }

    // getter
    void getCarData()
    {
        cout << endl
             << endl
             << "CAR ID\t\t: " << id << endl
             << "CAR NAME\t: " << name << endl
             << "CAR COLOR\t: " << color << endl
             << "CAR COMPANY\t: " << company << endl;
    }
};