#include <iostream>
using namespace std;

int main()
{
    int size, value;
    int arr[size];
    cout << "Please enter size of array: ";
    cin >> size;
    for (int i = 1; i <= size; i++)
    {
        cout << "Enter sorted element #" << i << ": ";
        cin >> arr[i];
    }
    cout << "Enter an element to search for: ";
    cin >> value;
    int first = 0, last = size - 1, middle, position = -1, i;
    bool found = false;
    while (!found && first <= last)
    {
        middle = (first + last) / 2;
        if (arr[middle] == value)
        {
            found = true;
            position = middle;
        }
        else if (arr[middle] > value)
            last = middle - 1;
        else
            first = middle + 1;
    }
    if (found)
    {
        cout << "Item is found at poition: " << position;
    }
    else
        cout << "Item is not found!!!" << endl;
    return 0;
}