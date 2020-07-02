#include <iostream>
using namespace std;

int main()
{
    char doAgain = 'y';
    int sum = 0;

    cout << "This code will increment sum 1 or more times.\n";

    while ((doAgain == 'y') || (doAgain == 'Y'))
    {
        sum++;
        cout << "Sum has been incremented.Increment itagain(y/n)? ";
        cin >> doAgain;
    }
    cout << "Sum was incremented " << sum << " times. \n ";
}

#include <iostream>
using namespace std;

int main()
{
    char doAgain = 'y';
    int sum = 0;

    cout << "This code will increment sum 1 or more times.\n";

    do
    {
        sum++;
        cout << "Sum has been incremented.Increment itagain(y/n)? ";
        cin >> doAgain;
    } while ((doAgain == 'y') || (doAgain == 'Y'));
    cout << "Sum was incremented " << sum << " times. \n ";
}