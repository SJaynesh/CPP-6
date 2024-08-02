#include <iostream>
#include "car.cpp"
using namespace std;

int main()
{
    // variable
    int n;

    std::cout << "Enter number of car data: ";
    cin >> n;
    // Array of Object
    Car c[n];

    for (int i = 0; i < n; i++)
        c[i].setCarData();

    for (int i = 0; i < n; i++)
        c[i].getCarData();
}
