// Question2 : find the area and perimeter of the rectangle that its width is 5 and its length is 6.

// Hint1 : in this question you don't ask user to enter any number in your program and you should define 4 variables that you initialized two of them.
#include <iostream>
using namespace std;

int main()
{
    int width = 5, length = 6, area, perimeter;
    area = width * length;
    cout << "Area = " << area << endl;
    perimeter = 2 * (width + length);
    cout << "Perimeter = " << perimeter;
    return 0;
}