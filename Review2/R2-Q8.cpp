#include <iostream>
using namespace std;

int main()
{
    int total = 0, num; // Initialize the accumulator
    cout << "Enter 10 numbers separated by spaces "
         << "and I will tell you their total \n";
    cout << "Enter your numbers here: ";
    for (int input = 1; input <= 10; input++)
    {
        cin >> num;
        total += num;
    }
    cout << "\nThese 10 numbers add up to " << total << endl;
}