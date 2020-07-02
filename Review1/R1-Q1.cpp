#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
    string make, model;
    int year;
    double cost;

    //Constructors
    Car()
    {
        make = "", model = "";
        year = 0, cost = 0;
    }

    Car(string mk, string md, int yr, double c)
    {
        make = mk;
        model = md;
        year = yr;
        cost = c;
    }
};

int main()
{
    Car hotRod("Ford", "Mustang", 2010, 22495.0);
    cout << "Make = " << hotRod.make << endl;
    cout << "Model = " << hotRod.model << endl;
    cout << "Year = " << hotRod.year << endl;
    cout << "Cost = " << hotRod.cost << endl;
}
