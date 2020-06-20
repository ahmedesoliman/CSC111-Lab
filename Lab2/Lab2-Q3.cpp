// Question3: Samsung store gives %10 discount of your entire purchase. Ask the user to enter the amount of his/her purchase and then show the final cost he/she should pay.

// Example: if user enters $1000 then after discount he should pay $900

// Hint: %10 means: 0.10. so %10 of 1000 is calculated by 0.10 * 1000
#include <iostream>

using namespace std;

int main()
{
    int total, discounted;
    cout << "Please entre your purchase total = ";
    cin >> total;
    discounted = total - (0.10 * total);
    cout << "Your purchase after discount is $" << discounted << endl;
}