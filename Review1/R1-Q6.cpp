#include <iostream>
using namespace std;
int main()
{
    int array1[25];
    int array2[25];
    int total = 0; //Accumulator
    int count;
    total += array1[count];
    for (count = 0; count <= 25; count++)
        total += array1[count];
    cout << "The total for array1 is: " << total << endl;
    for (count = 0; count <= 25; count++)
        total += array2[count];
    cout << "The total for array2 is: " << total << endl;
}