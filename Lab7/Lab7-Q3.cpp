// Question3:
// Sales Prediction
// A company has determined that its annual profit is typically 23 percent of total sales.
// Write a program that asks the user to enter the projected amount of total sales, and annual profit,
// and determine whether the annual profit is 23 percent of total sales or not?
// Hint: Use the value of 0.23 to represent 23 percent.

#include <iostream>

using namespace std;

int main()
{
    double totalSales, annualProfit;
    cout << "Please enter total sales: ";
    cin >> totalSales;
    cout << "Please enter annual profit: ";
    cin >> annualProfit;
    if (annualProfit >= (totalSales * 0.23))
        cout << "Annual profit is 23% or more of total sales!";
    else
        cout << "Annual profit is less than 23% of total sales!";
    return 0;
}