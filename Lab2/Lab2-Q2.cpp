//Question2: Write a C++ program that asks the user to enter the radius of the circle and then find the circumference and area of the circle.

// Note: use 3.14 as pi. So

// area= pi*radius* radius

// circumference = 2 * pi * radius

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
double radius, circum, area;
const double PI = 3.14;
cout << "Enter radius of the circle: ";
cin >> radius;
area = PI * radius * radius;
circum = 2 * PI * radius;
cout << "Area of the recangle: " << area << endl;
cout << "Cirumference of recangle: " << circum << endl;
return 0;
}



