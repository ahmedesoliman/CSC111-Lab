#include <iostream>

using namespace std;

void getmax(int, int[]);
void getmin(int, int[]);

int main()
{
    int size;
    cout << "Please entre size of array: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter value: ";
        cin >> arr[i];
    }
    getmax(size, arr);
    getmin(size, arr);
}

void getmax(int size, int arr[])
{
    int max;
    max = arr[0];
    for (int j = 1; j < size; j++)
    {
        if (arr[j] > max)
            max = arr[j];
    }
    cout << "Maximum value is: " << max << endl;
}

void getmin(int size, int arr[])
{
    int min;
    min = arr[0];
    for (int k = 1; k < size; k++)
    {
        if (arr[k] < min)
            min = arr[k];
    }
    cout << "Minimum value is: " << min << endl;
}