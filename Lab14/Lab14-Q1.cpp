#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int row, col;
    cout << "Please enter rows: ";
    cin >> row;
    cout << "Please enter columns: ";
    cin >> col;
    int arr[row][col];
    cout << "*Your multiplication table*" << endl;
    for (int i = 1; i <= row; ++i)
    {
        for (int n = 1; n <= col; ++n)
        {
            arr[i - 1][n - 1] = i * n;
        }
    }
    for (int i = 0; i < row; ++i)
    {
        for (int n = 0; n < col; ++n)
            cout << setw(3) << arr[i][n] << " | ";
        cout << endl;
    }

    return 0;
}