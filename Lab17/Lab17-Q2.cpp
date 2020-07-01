#include <iostream>
using namespace std;
int main()
{
    int size;
    double arr[size], sum = 0, avg, *ptr;
    ptr = arr;
    cout << "Entre size of Array: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Entre elements #" << i + 1 << " : ";
        cin >> arr[i];
        sum += *ptr;
        ptr++;
    }
    cout << "Your Average is: " << sum / size;
}
