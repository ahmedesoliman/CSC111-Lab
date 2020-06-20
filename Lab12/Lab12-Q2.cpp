#include <iostream>
using namespace std;

double FindMax();

double number, big, small, counter = 0;
int main()
{
    cout << "Please entre Two Numbers\n"
         << "And I will tell you which one is greater\n"
         << "-----------------------------" << endl;
    FindMax();
}

double FindMax()
{
    for (int i = 1; i <= 2; i++)
    {
        cout << "Entre number# " << i << ": ";
        cin >> number;
        if (counter == 0)
        {
            big = number;
            small = number;
        }
        else
        {
            if (number > big)
                big = number;
            else if (number < small)
                small = number;
        }
        counter++;
    }
    cout << "Greatest number is: " << big << endl;
    cout << "Least number is: " << small << endl;
    return number;
}