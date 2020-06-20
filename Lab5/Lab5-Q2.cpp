#include <iostream>

using namespace std;

int main()
{
    const int minScore = 0, maxScore = 100;
    int testscore;
    cout << "Please Entre Your numeric test score and I will\n"
         << "tell you the letter grade you earned: ";
    cin >> testscore;
    if (testscore >= minScore && testscore <= maxScore)
    {
        if (testscore >= 93)
            cout << "Your grade is A";
        else if (testscore >= 90 && testscore <= 92)
            cout << "Your grade is A-";
        else if (testscore >= 87 && testscore <= 89)
            cout << "Your Score is B+";
        else if (testscore >= 83 && testscore <= 86)
            cout << "Your grade is B";
        else if (testscore >= 80 && testscore <= 82)
            cout << "Your grade is B-";
        else if (testscore >= 77 && testscore <= 79)
            cout << "Your grade is C+";
        else if (testscore >= 73 && testscore <= 76)
            cout << "Your grade is C";
        else if (testscore >= 70 && testscore <= 72)
            cout << "Your grade is C-";
        else if (testscore >= 67 && testscore <= 69)
            cout << "Your grade is D+";
        else if (testscore >= 63 && testscore <= 66)
            cout << "Your grade is D";
        else if (testscore >= 60 && testscore <= 62)
            cout << "Your grade is D-";
        else
            cout << "Your grade is F";
    }
    else
    {
        cout << "That is an invalid score. Run the program again!\n"
             << "Entre a value in the range of" << minScore << " though " << maxScore << endl;
    }
    return 0;
}
