#include <iostream>
using namespace std;

void search(int arr[], int size, int value);

int main()
{
    int size, value;
    int arr[size];
    cout << "Entre size of Array: ";
    cin >> size;
    for (int i = 1; i <= size; i++)
    {
        cout << "\nEntre array number #" << i << ": ";
        cin >> arr[i];
    }
    cout << "\nEntre number to search for: ";
    cin >> value;
    search(arr, size, value);
}

void search(int arr[], int size, int value)
{
    int j, position = -1;
    bool found = false;
    while (j + 1 < size && !found)
    {
        if (arr[j] == value)
        {
            found = true;
            position = j;
        }
        j++;
    }
    if (found == true)
        cout << "item is found at poition: " << j + 1;
    else
        cout << "item is not found!!!";
}
