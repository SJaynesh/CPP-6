#include <iostream>
#include <string.h>
using namespace std;

class Student
{
private:
    // Data Members == Atributtes
    int rollNo;
    char name[20];
    double per;
    int age;

public:
   
    // Setter == Input
    void setStudentData(int rollNo, char name[], double per, int age)
    {
        this->rollNo = rollNo;
        strcpy(this->name, name);
        this->per = per;
        this->age = age;

        // Nasted Member Function
        getStudentData();
    }
    // Getter
    void getStudentData()
    {
        cout << "Roll No : " << this->rollNo << endl
             << "Name    : " << this->name << endl
             << "Per     : " << this->per << endl
             << "Age     : " << this->age << endl
             << endl;
    }
};

int main()
{
    // object => ClassName objName;

    Student s1;
    Student s2;

    s1.setStudentData(101, "Niranjan", 74.23, 19);
    s2.setStudentData(102, "Prince", 78.23, 20);

    // s1.getStudentData();
    // s2.getStudentData();
}