#include <iostream>
#include <string>
using namespace std;

int main()
{
    string first, last;
    cout << "What is your first name: ";
    getline(cin, first);
    cout << "What si your last name: ";
    getline(cin, last);
    if (first > last)
        cout << "First Name is greater";
    else
        cout << "Last name is greater";
    return 0;
}