// Question5:
// Total Purchase
// A customer in a store is purchasing five items.
// Write a program that asks for the price of each item, and then displays the subtotal of the sale, the amount of sales tax, and the total.
// // Assume the sales tax is 7 percent.

#include <iostream>

using namespace std;

int main()
{
    int item, total, sub = 0, i = 0;
    while (i < 5)
    {
        cout << "Please entre the price of your item: ";
        cin >> item;
        sub += item;
        i++;
    }
    cout << "Your subtotal is: " << sub << endl;
    total = sub + (sub * 0.07);
    cout << "Your total for this purchase after %7 sales tax is: " << total << endl;

    return 0;
}