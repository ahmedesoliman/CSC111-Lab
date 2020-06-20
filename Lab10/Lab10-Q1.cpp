#include <iostream>
using namespace std;

double getsalary();

const double RATE = 0.09, EXTRA = 200;

int main()
{
    getsalary();
    return 0;
}

double getsalary()
{
    double sales, salary, i;
    while (sales != -1)
    {
        cout << "Entre Sales in dollars (-1 to end): ";
        cin >> sales;
        if (sales != -1)
        {
            salary = (sales * RATE) + EXTRA;
            cout << "salary is :" << salary << endl;
        }
        else
            cout << "Program terminated!";
    }
    return 0;
}