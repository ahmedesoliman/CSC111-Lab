#include <iostream>
using namespace std;
int main()
{
    int i, j, row, col;
    cout << "Please entre rows: ";
    cin >> row;
    cout << "PLease entre columns: ";
    cin >> col;
    for (i = 1; i <= row; ++i)
    {
        cout << i << "|";
        for (j = 1; j <= col; ++j)
        {
            cout << j * i << "|";
            cout << endl;
        }
    }
    return 0;
}