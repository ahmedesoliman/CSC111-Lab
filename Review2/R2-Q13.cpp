#include <iostream>

using namespace std;

int main()
{
    int scorel, score2, score3; //variable declaration usually at the top
    double average;
    bool perfectScore = false;                       // set flag to false
    cout << "Enter your 3 test scores and I will \n" // can't terminate the line yet with semicolon!
         << "average them: ";
    cin >> scorel >> score2 >> score3;
    average = (scorel + score2 + score3) / 3.0;
    if (average == 100)      // needs strictly equals
    {                        // Needs curly braces {}
        perfectScore = true; // Set the flag variable
        cout << "Your average is: " << average << endl;
        cout << "Congratulations! \n";
        cout << "That's a perfect score. \n";
        cout << "You deserve a pat on the back! \n";
    }
    else // else statment do not need a condition also moved every cout up in if statment
        cout << "Your average is: " << average << endl;
}