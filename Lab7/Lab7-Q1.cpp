// // Question1) Write a program that asks a user to enter 3 grades.
// Then find the average and if the average is greater than 70, display Excellent,
// otherwise decrease 5 points from the first grade and calculate the average again
// and print "your new average is..."

#include <iostream>

using namespace std;

int main()
{
    int grade, avg, sum = 0, num = 0;
    while (num < 3)
    {
        cout << "Please entre your grade: ";
        cin >> grade;
        sum += grade;
        num++;
    }
    avg = sum / 3;
    if (avg > 70)
    {
        cout << "Excellet";
    }
    else
    {
        if (avg < 70)
            sum = sum - 5;
        avg = sum / 3;
        cout << "Your new average is " << avg << endl;
    }
    return 0;
}
