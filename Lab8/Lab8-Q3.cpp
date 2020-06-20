#include <iostream>

using namespace std;

int main()
{
    char eng101, csc101;
    cout << "Did you pass ENG 101 [Y/N]: ";
    cin >> eng101;
    cout << "Did you pass CSC 101 [Y/N]: ";
    cin >> csc101;
    if (eng101 == 'Y' || eng101 == 'y')
    {
        if (csc101 == 'y' || csc101 == 'Y')
        {
            cout << "Cogratulations you qualify to take CSC 111" << endl;
        }
        else
            cout << "Sorry You can't take CSC11" << endl;
    }
    return 0;
}