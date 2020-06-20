#include <iostream>
using namespace std;

int main()
{
    int number = 0, sum = 0, avg, product = 1, counter = 0, largest, smallest;
    for (int i = 1; i <= 3; i++)
    {
        cout << "Entre integer#" << i << ": ";
        cin >> number;
        sum += number;
        avg = sum / i;
        product *= number;
        if (counter == 0)
        {
            largest = number;
            smallest = number;
        }
        else
        {
            if (number > largest)
                largest = number;
            else if (number < smallest)
                smallest = number;
        }
        counter++;
    }
    cout << "-------------" << endl;
    cout << "Sum is: " << sum << endl;
    cout << "Average is: " << avg << endl;
    cout << "Product is: " << product << endl;
    cout << "Largest is: " << largest << endl;
    cout << "Smallest is: " << smallest << endl;
    return 0;
}