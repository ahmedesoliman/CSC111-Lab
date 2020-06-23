#include <iostream>
#include <string>
using namespace std;
void findmax(int, int[]);
void findmin(int, int[]);

int main()
{
    int max, min, size, i;
    cout << "How many number do you want to enter? " << endl;
    cin >> size;
    int arr[size];

    for (i = 0; i < size; i++)
    {
        cout << "Enter Number: " << endl;
        cin >> arr[i];
        {
        }

        return 0;
    }
}
void findmax(int size, int arr[])
{
    int max;
    for (int n = 0; n < size; n++)
    {
        if (arr[n] > max)
            max = arr[n];
    }
    cout << max << "is the Maximum Number " << endl;
}
void findmin(int size, int arr[])
{
    int min;
    for (int n = 0; n < size; n++)
    {
        if (arr[n] > min)
            min = arr[n];
    }
    cout << min << "is the minimum Number " << endl;
}