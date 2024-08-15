#include <iostream>
#include <string.h>
using namespace std;

class Items
{
private:
    int id;
    char name[20];

public:
    // setter
    void setData()
    {
        cout << "Enter item id: ";
        cin >> this->id;
        fflush(stdin);
        cout << "Enter item name: ";
        gets(this->name);
    }

    // getter
    void getData()
    {
        cout << endl
             << endl
             << "ITEM ID\t : " << this->id << endl
             << "ITEM NAME : " << this->name << endl;
    }
};

int main()
{
    // Object
    // Items i1;

    // Pointer Object
    // Items *ptr = &i1;
    int size;

    cout << "Enter number of items: ";
    cin >> size;

    //  Array of Pointer objects
    Items *ptr = new Items[size];

    // [101, Snack] [102] []
    // 0            1   2

    // -> arrow operator
    for (int i = 0; i < size; i++)
    {
        (ptr + i)->setData();
    }

    for (int i = 0; i < size; i++)
    {
        (ptr + i)->getData(); // 20+1 = 24
    }

    delete[] ptr;
}