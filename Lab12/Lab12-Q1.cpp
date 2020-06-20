#include <iostream>
using namespace std;

double findArea();
double findPeri();

double width, length, area, peri;
int main()
{
    cout << "Please entre width: ";
    cin >> width;
    cout << "Please entre length: ";
    cin >> length;
    findArea();
    findPeri();
    return 0;
}

double findArea()
{
    area = (length * width);
    cout << "Area is: " << area << endl;
    return 0;
}

double findPeri()
{
    peri = 2 * (length + width);
    cout << "Perimeter is: " << peri << endl;
    return 0;
}
