// // Question6:
// // Ask the user to enter a float number between 0 and 10
// if the number is greater than 5 then subtract it by 1 and print the result with only two digits after the decimal points.
// (for current example it is: 5.12).
// Otherwise, add 1 to the number and print it with 2 digits after the decimal point.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double number;
    cout << "Please entre a float number: ";
    cin >> number;
    if (number > 5)
        number = number - 1;
    else
        number = number + 1;
    cout << setprecision(2) << fixed;
    cout << number;
    return 0;
}