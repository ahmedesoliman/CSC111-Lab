#include <iostream>

using namespace std;

int main()
{
    double num;
    cout << "Please entre a number: ";
    cin >> num;
    if (num < 0)
        cout << "Its a negative number";
    else if (num > 0)
        cout << "It's a positive number";
    else
        cout << "Its a Zero!";
    return 0;
}