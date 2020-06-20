// Question2: find is the user qualified for the loan or not? the user is qualified for the loan if s/he is employed and is graduated recently and also has annual income more than $30000
#include <iostream>

using namespace std;

int main()
{
    char employed, recentgrad, namesapce;
    double salary;
    cout << "Are you employed? Y/N: ";
    cin >> employed;
    cout << "Are you a recent Grad? Y/N: ";
    cin >> recentgrad;
    cout << "Whats your annual salary? ";
    cin >> salary;
    if (employed == 'Y' || employed == 'y')
    {
        if (recentgrad == 'Y' || recentgrad == 'y')
        {
            if (salary >= 30000)
            {
                cout << "Congratulations you are qualified for the loan!";
            }
            else
            {
                cout << "Sorry you are not qualified for the loan\n"
                     << "You must be employed\n"
                     << "A recent Graduate\n"
                     << "Have a $30000 salary or more\n";
            }
        }
    }
    else
        cout << "Sorry you are not qualified for the loan\n"
             << "You must be employed\n"
             << "A recent Graduate\n"
             << "Have a $30000 salary or more\n";
    return 0;
}
