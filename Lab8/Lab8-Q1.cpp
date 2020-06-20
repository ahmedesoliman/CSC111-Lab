#include <iostream>

using namespace std;

int main()
{
    double width, length, area, peri;
    bool status = false;
    cout << "Please entre length: ";
    cin >> length;
    cout << "Please entre width: ";
    cin >> width;
    area = length * width;
    cout << "Area = " << area << endl;
    if (area > 10)
    {
        status = true;
        if (status = true)
        {
            peri = 2 * (length + width);
            cout << "Perimeter = " << peri << endl;
        }
    }
    else
        cout << "Area is less than 10 \n"
             << "To find Perimeter Area has to be greater than 10 ";
    return 0;
}