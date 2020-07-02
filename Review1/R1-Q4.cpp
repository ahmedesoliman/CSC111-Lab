#include <iostream>
using namespace std;

void display(int argl, double arg2, char arg3)
{
    cout << "Age = : " << argl << endl;
    cout << "Income = " << arg2 << endl;
    cout << "Char Intial: " << arg3 << endl;
}

int main()
{
    int age = 27;
    double income = 25000;
    char initial = 'A';
    display(age, income, initial);
}