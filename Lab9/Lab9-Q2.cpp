#include <iostream>
#include <string>
using namespace std;

int main()
{
    int total = 0, grade, avg, i;
    for (i = 0; i < 10; i++)
    {
        cout << "Please entre your grade: ";
        cin >> grade;
        while (grade < 0 || grade > 100)
        {
            cout << "The grade you entered is not valid\n"
                 << "Entre a grade between 0 - 10\n"
                 << "Please enter the valid grade: ";
            cin >> grade;
        }
        total += grade;
    }
    cout << "Your total is: " << total << endl;
    avg = total / i;
    cout << "The average of your grades: " << avg;
    return 0;
}