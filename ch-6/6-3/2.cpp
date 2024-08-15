#include <iostream>
using namespace std;

int main()
{
    // Array of pointer
    int *ptr = new int[3];

    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 90;

    cout << ptr[0] << endl;
    cout << ptr[1] << endl;
    cout << ptr[2] << endl;

    delete[] ptr;

    cout << ptr[0] << endl;
    cout << ptr[1] << endl;
    cout << ptr[2] << endl;
}