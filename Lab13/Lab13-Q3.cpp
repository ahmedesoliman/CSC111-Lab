#include <iostream>

using namespace std;

int main()
{
    int size, min, max;
    cout << "Please entre size of array: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter value: ";
        cin >> arr[i];
    }

    for (int count = 1; count < size; count++)
    {
        max = arr[0];
        if (arr[count] > max)
        {
            max = arr[count];
        }
        cout << "Maximum value is: " << max << endl;
    }

    for (int count = 1; count < size; count++)
    {
        min = arr[0];
        if (arr[0] < min)
        {
            min = arr[count];
        }
    }
    cout << "Minimum value is: " << min << endl;
}