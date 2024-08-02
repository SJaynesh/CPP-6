#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
    // Attributes == Data Members
private:
    int id;
    char name[20];
    double salary;
    char company[20];

public:
    // Methods == Data Member Function

    // setter
    void setData(int id, char name[], double salary, char company[])
    {
        this->id = id;
        strcpy(this->name, name);
        this->salary = salary;
        strcpy(this->company, company);
    }

    // getter
    void getData()
    {
        cout << "Id => " << this->id << " Name => " << this->name
             << " Salary => " << this->salary << " Company => " << this->company
             << endl;
    }
};

int main()
{
    // Object
    Employee e1, e2;

    e1.setData(101, "Keval", 56000, "ABC");
    e2.setData(102, "Darshan", 58000, "XYZ");

    // strcpy(e1.name, "Jay");

    e1.getData();
    e2.getData();
}