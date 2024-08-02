#include <iostream>
#include "student.cpp"
using namespace std;

// Global Variable
int a = 10;

int main()
{
    // int a = 35;
    // cout << "Number\t: " << a << endl;
    // cout << "Number\t: " << ::a << endl;

    int n;

    cout << "Enter number of student : ";
    cin >> n;

    Student s1[n];

    for (int i = 0; i < n; i++)
        s1[i].setStudentData();

    for (int i = 0; i < n; i++)
        s1[i].getStudentData();

    Student::printData();
}
