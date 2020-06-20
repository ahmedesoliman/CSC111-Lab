// Question2) Implement the following algorithm:
// 1)ask the user to enter the amount of sales.
// 2)check whether the amount of sales is greater than $50000.
// 2.1. if the condition is true then add $500 as a bonus to the sales
// 3)  print the sales

#include <iostream>

using namespace std;

int main()
{
    int sales;
    cout << "Please entre amount sales: ";
    cin >> sales;
    if (sales >= 50000)
    {
        sales = sales + 500;
        cout << " Sales plus bouns is $" << sales << endl;
    }
    else
        cout << "Not enough sales for bouns" << endl;
    return 0;
}
