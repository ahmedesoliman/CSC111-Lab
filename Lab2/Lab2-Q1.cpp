// Question1: write a C++ program that asks a user to enter the width and length of the rectangle and then calculate the perimeter and area of the rectangle.

// Note: inputs are width and length and outputs are area and perimeter.

// Area= width * length

// Perimeter= 2*(width + length)

// The output is like the following:

// Please enter the width: 2

// please enter the length: 3

// according to the numbers you have entered, the area is 6 and the perimeter is 10
#include <iostream>

using namespace std;

int main()
{
  int area, perimeter, width, length;
  cout << "Please enter the width: ";
  cin >> width;
  cout << "Please enter the length: ";
  cin >> length;
  area = width * length;
  perimeter = 2 * (width + length);
  cout << "According to the numbers you have enteresd, the area is " << area << " and the preimeter is " << perimeter << endl;
  return 0;
}