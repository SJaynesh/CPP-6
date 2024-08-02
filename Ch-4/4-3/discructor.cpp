#include <iostream>
using namespace std;

// Bitwise : &, |, ^, <<, >>, ~
class City
{
public:
    // Default Constructor
    City()
    {
        cout << "Default Constructor....." << endl;
    }

    // Destructor
    ~City()
    {
        cout << "Thankfor Visit....." << endl;
    }
};

int main()
{
    City c1;

    cout << "Hello, How ara You ????" << endl;
}
