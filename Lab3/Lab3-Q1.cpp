// Question1:

// Ask the user to enter the radios (half of the diameter), and then find the circumference and area of the circle with 2digits after the decimal point. The output should be displayed with 8 spaces in width.

// Hint: pi is  3.14159265359

// The output is like the following:

// Please enter the radios: 3

// The circumference is:    18.84mingw

// The area is:    28.27

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    double radius, circum, area;
    const double PI = 3.14159265359;
    cout << "Please entre the radios: ";
    cin >> radius;
    area = PI * radius * radius;
    circum = 2 * PI * radius;
    cout << setprecision(2) << fixed;
    cout << "The circumference is: " << circum << endl;
    cout << "The area is: " << area;
    return 0;
}