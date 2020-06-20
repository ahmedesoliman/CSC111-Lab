// Question2: Write a program in C++ to find the Size of fundamental data types.

// For example your program displays:

// The size of(char) is : 1 bytes
// The size of(short) is : 2 bytes
// The size of(int) is : 4 bytes
// The size of(long) is : 8 bytes
// The size of(long long) is : 8 bytes
// The size of(float) is : 4 bytes
// The size of(double) is : 8 bytes
// The size of(long double) is : 16 bytes
// The size of(bool) is : 1 bytes

#include <iostream>
using namespace std;

int main()
{
    cout << "The sizeof(char) is : " << sizeof(char) << " bytes \n";
    cout << "The sizeof(short) is : " << sizeof(short) << " bytes \n";
    cout << "The sizeof(int) is : " << sizeof(int) << " bytes \n";
    cout << "The sizeof(long) is : " << sizeof(long) << " bytes \n";
    cout << "The sizeof(long long) is : " << sizeof(long long) << " bytes \n";
    cout << "The sizeof(float) is : " << sizeof(float) << " bytes \n";
    cout << "The sizeof(double) is : " << sizeof(double) << " bytes \n";
    cout << "The sizeof(long double) is :  " << sizeof(long double) << " bytes \n";
    cout << "The sizeof(bool) is : " << sizeof(bool) << " bytes \n\n";
    return 0;
}