// Question1: ask the user to enter 3 grades for you and then calculate the average of him/her. then if the average is greater than 80, display "Excellent"' otherwise display" you should study more".
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double grade1, grade2, grade3, avg;
    cout << "Please enter your 3 grades:";
    cin >> grade1 >> grade2 >> grade3;
    avg = (grade1 + grade2 + grade3) / 3.0;
    if (avg > 80)
        cout << "Excellent";
    else
        cout << "You should study more";
    return 0;
}