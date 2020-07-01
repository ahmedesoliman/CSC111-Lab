// first, define the rectangle class which has two functions for calculating area and perimeter.
//then write a c++ program that in its main function has 2 square objects and calculate their area and perimeter.
//for each object ask the user to give you the sides.

#include <iostream>
using namespace std;

class rect
{
public:
    rect();
    double getArea(double l, double w);
    double getPeri(double l, double w);
};

rect::rect()
{
}

double rect::getArea(double l, double w)
{

    return l * w;
}

double rect::getPeri(double l, double w)
{
    return 2 * (l + w);
}
int main()
{
    double l, w;
    cout << "Enter Lenth: ";
    cin >> l;
    cout << "Enter Width: ";
    cin >> w;
    rect area, peri;
    cout << "Area = " << area.getArea(l, w) << endl;
    cout << "Perimeter = " << peri.getPeri(l, w) << endl;
}
