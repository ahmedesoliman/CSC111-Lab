#include <iostream>
using namespace std;

void swap(int, int);
void bubblesort(int arr[], int size);
void search(int arr[], int size, int value);

void search(int arr[], int size, int value)
{
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
}

void bubblesort(int arr[], int size)
{
    int maxElement;
    int index;
    for (maxElement = size - 1; maxElement > 0; maxElement--)
    {
        for (index = 0; index < maxElement; index++)
        {
            if (arr[index] > arr[index + 1])
            {
                swap(arr[index], arr[index + 1]);
            }
        }
    }
}
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int size, value;
    int arr[size];
    cout << "Please entre size of array: ";
    cin >> size;
    for (int i = 1; i <= size; i++)
    {
        cout << "Entre element: ";
        cin >> arr[i];
    }
    cout << "entre element to search for: ";
    cin >> value;
    bubblesort(arr, size);
    search(arr, size, value);
}