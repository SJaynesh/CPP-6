#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    // Function => printf
    // Object => cout << => Console Output

    // :: => Scope Resulation Operator

    // cin => Console Input => cin >>

    cout << "Hello World !!" << endl
         << "I am Jaynesh Sarkar" << endl
         << "I am Flutter Developer !!" << endl
         << endl
         << endl;

    int a, b;
    float pi;
    char name[20];
    string surname;

    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter PI value : ";
    cin >> pi;
    fflush(stdin);
    cout << "Enter name: ";
    gets(name);
    fflush(stdin);
    cout << "Enter surname: ";
    cin >> surname;

    cout << endl
         << endl;

    cout << "A\t: " << a << endl
         << "B\t: " << b << endl
         << "PI\t: " << pi << endl
         << "Name\t: " << name << endl
         << "SurName\t: " << surname << endl
         << endl;

    // int sum = a + b; // 10 + 20 = 30

    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " * " << b << " = " << a * b << endl;

    if (a > b)
    {
        cout << endl
             << a << " is Maximum..." << endl;
    }
    else
    {
        cout << endl
             << b << " is Maximum..." << endl;
    }
    // 10 + 20 = 30

    for (int i = 1; i <= 10; i++)
    {
        cout << i << "\t";
    }

    cout << endl
         << endl
         << "Multiplication Table" << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << a << " * " << i << " = " << a * i << endl;
        // 10 * 2 = 20
    }

    return 0;
}