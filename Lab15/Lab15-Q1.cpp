#include <iostream>
using namespace std;

int main()
{
    int size, value;
    int arr[size];
    int j = 0, position = -1;
    bool found = false;
    cout << "Entre size of Array: ";
    cin >> size;
    for (int i = 1; i <= size; i++)
    {
        cout << "\nEntre array number #" << i << ": ";
        cin >> arr[i];
    }
    cout << "\nEntre number to search for: ";
    cin >> value;

    while (j < size && !found)
    {
        if (arr[j] == value)
        {
            found = true;
            position = j;
        }
        j++;
    }
    if (found)
    {
        cout << "Item is found at poition: " << i;
    }
    else
        cout << "Item is not found!!!" << endl;
}
