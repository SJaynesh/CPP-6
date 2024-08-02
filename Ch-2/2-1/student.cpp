#include <iostream>
#include <string.h>
using namespace std;

class Student
{
    // Attributes == Data Members
    // Access Modifier
public:
    int rollNo;
    char name[20];
    int age;
    double per;
    char school[20];
};

int main()
{
    // Object => ClassName ObjName;
    Student s1;

    // dot(.) Operator
    // s1.rollNo = 102;
    // strcpy(s1.name, "Om Kumar");
    // s1.age = 56;
    // s1.per = 78.23;
    // strcpy(s1.school, "ABC School");

    cout << "Enter your roll no: ";
    cin >> s1.rollNo;
    fflush(stdin);
    cout << "Enter your name: ";
    gets(s1.name);
    cout << "Enter your age: ";
    cin >> s1.age;
    cout << "Enter your per: ";
    cin >> s1.per;
    fflush(stdin);
    cout << "Enter your school name: ";
    gets(s1.school);

    s1.rollNo = 7851;

    cout << endl
         << endl;
    cout << "Roll No\t: " << s1.rollNo << endl;
    cout << "Name\t: " << s1.name << endl;
    cout << "Age\t: " << s1.age << endl;
    cout << "Per\t: " << s1.per << endl;
    cout << "School\t: " << s1.school << endl;
}