#include <iostream>
using namespace std;

class Rectangle
{
public:
    Rectangle();
    double getArea(double length, double width);
    double getPerimeter(double length, double width);
};
Rectangle::Rectangle()
{
}
double Rectangle::getArea(double length, double width)
{
    double Area = length * width;
    cout << "The Perimeter of the Rectangle is " << Area << endl;
    return Area;
}
double Rectangle ::getPerimeter(double length, double width)
{
    double Perimeter = 2 * (length + width);
    cout << "The Perimeter of the Rectangle is " << Perimeter << endl;
    return Perimeter;
}
int main()
{
    double length, width;
    cout << "Pease enter the length of the Rectangle " << endl;
    cin >> length;
    cout << "Please enter the width of the Rectangle " << endl;
    cin >> width;
    Rectangle objArea;
    Rectangle objPerimeter;
    objArea.getArea(length, width);
    objPerimeter.getPerimeter(length, width);
}