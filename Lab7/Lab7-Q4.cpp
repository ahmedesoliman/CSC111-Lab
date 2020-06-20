// Question4:
// Land Calculation:
// One acre of land is equivalent to 43,560 square feet.
// Write a program that asks the user to enter the total square feet in a tract of land and calculates the number of acres in the tract.
// Hint: Divide the amount entered by 43,560 to get the number of acres.

#include <iostream>

using namespace std;

int main()
{
    double sfland, acres;
    cout << "Please entre the total square feet of your land: ";
    cin >> sfland;
    acres = sfland / 43560;
    cout << "Your land in Acres: " << acres << endl;
    return 0;
}