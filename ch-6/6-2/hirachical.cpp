#include <iostream>
#include <string.h>
using namespace std;

// Parent class
class Movie
{
public:
    char oscar[100];

public:
    void setMovie()
    {
        strcpy(oscar, "Winner Movie Award :");
    }
};

// child class
class Bollywood : public Movie
{
public:
    char b = 'B';

    // setMovie();
};

// child class
class Hollywood : public Movie
{
public:
    char h = 'H';
    // setMovie();
};

// child class
class Tollywood : public Movie
{
public:
    char t = 'T';
    // setMovie();
};

int main()
{
    Bollywood b1;

    b1.setMovie();

    cout << b1.oscar << " " << b1.b << endl
         << endl;

    Tollywood t1;

    t1.setMovie();
    cout << t1.oscar << " " << t1.t << endl
         << endl;
}