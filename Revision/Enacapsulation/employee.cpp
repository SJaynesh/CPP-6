#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
private:
    int no;
    char name[20];
    double salary;
    int age;

    // 4 + 20 + 8 + 4 = 34

public:
    // Static Data Member
    static char companyName[20];
    // Setter
    void setData()
    {
        cout << endl
             << endl;
        cout << "Enter employee number : ";
        cin >> this->no;
        fflush(stdin);
        cout << "Enter employee name : ";
        gets(this->name);
        cout << "Enter employee salary : ";
        cin >> this->salary;
        cout << "Enter employee age : ";
        cin >> this->age;
        fflush(stdin);
    }

    // Getter
    void getData()
    {
        cout << "| " << this->no << "\t"
             << this->name << "\t"
             << this->salary << "\t"
             << this->age << "\t"
             << this->companyName << " |"
             << endl;
    }

    void tableView()
    {
        cout << endl
             << endl
             << "\t EMPLOYEE TABLE" << endl
             << endl;
        cout << "| No.\tName\tSalary\tAge\tCompany |" << endl;
        cout << "| --.\t----\t------\t---\t------- |" << endl;
    }

    // Static Data Member Function
    static void printStaticData()
    {
        cout << "Static Company Name : " << companyName << endl;
    }
};

// Scope Resulation Operator == Membership Label Operator
char Employee::companyName[20] = "RNW";

int main()
{
    int size;

    cout << "Enter number of employees : ";
    cin >> size;
    // Objetc Array == Array of Object
    Employee e1[size];

    Employee emp1;
    // 56 * 100 = 5600 bytes
    // 34 * 100 = 3400 + 20 = 3420

    // 5600 - 3420 = 2180 bytes

    for (int i = 0; i < size; i++)
    {
        e1[i].setData();
    }

    e1[0].tableView();

    for (int i = 0; i < size; i++)
    {
        e1[i].getData();
    }

    Employee::printStaticData();
}