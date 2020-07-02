#include <iostream>
using namespace std;
int main()
{
    int x = 1;
    while (x < 10) //if we remove the semicolon it will display 10
        x++;
    cout << x; // if we add {} after while loop it will display from 2 - 10
}