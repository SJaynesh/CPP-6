#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    char name[20];
    int age;
    // Static Data Members
    static char teacherName[20];
    static char school[20];

public:
    // setter
    void setStudentData()
    {
        cout << "Enter your roll no: ";
        cin >> rollNo;
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your age: ";
        cin >> age;
    }

    // getter
    void getStudentData()
    {
        cout << endl
             << endl
             << rollNo << " "
             << name << " "
             << age << " "
             << teacherName << " "
             << school << endl;
    }

    // Static Data Member Fuction
    static void printData()
    {
        cout << teacherName << endl;
        cout << school << endl;
    }
};

// :: Membership Operator
char Student::school[20] = "XYZ School";
char Student::teacherName[20] = "Jaynesh Sarkar";