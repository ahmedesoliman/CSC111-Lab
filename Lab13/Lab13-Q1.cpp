#include <iostream>
using namespace std;

void getgrade();

int number, avg, sum = 0;
int main() {
    getgrade();
    return 0;
}

void getgrade() {
    cout << "Please entre number of grades: ";
    cin >> number;
    int grade[number];
    for (int i = 0; i < number; ++i) {
        cout << "Enter the grade: ";
        cin >> grade[i];
        sum += grade[i];
    }
    avg = sum/number;
    cout << "Your grade average =  " << avg << endl;
}