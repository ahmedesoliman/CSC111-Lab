#include <iostream>
using namespace std;
int main()
{
    int x = 1;
    for (int count = 1; count <= 10; count++)
    {
        cout << ++count << " ";
    }
}

//The only difference is the order of operations between the increment of the variable and the value the operator returns.
//So basically ++i returns the value after it is incremented, while ++i return the value before it is incremented.
//At the end, in both cases the i will have its value incremented.