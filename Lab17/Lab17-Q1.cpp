#include <iostream>
using namespace std;
int main()
{
    int A, B, *ptrA = &A, *ptrB = &B;
    cout << "Entre an integer for A: ";
    cin >> A;
    cout << "Enter an integer for B: ";
    cin >> B;
    cout << "Value A = " << *ptrA << endl;
    cout << "Value B = " << *ptrB;
}