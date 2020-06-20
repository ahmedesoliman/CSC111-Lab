// Question4: Ask a student to enter his/her name and also 3 grades and then calculate his/her average.

// Output example:

// What is your name: Amir

// What is your first exam’s grade? 100

// What is your second exam’s grade? 100

// What is your third exam’s grade? 100

// Hello Amir, According to the grades you entered your average is: 100

// Hint: to calculate average: add all grades and divide by the number of grades

// Question4: Ask a student to enter his/her name and also 3 grades and then calculate his/her average.

// Output example:

// What is your name: Amir

// What is your first exam’s grade? 100

// What is your second exam’s grade? 100

// What is your third exam’s grade? 100

// Hello Amir, According to the grades you entered your average is: 100

// Hint: to calculate average: add all grades and divide by the number of grades

#include <iostream>

using namespace std;

int main()
{
    char name;
    double grade1, grade2, grade3; 
    int avg;
    cout << "What is your name? ";
    cin >> name;
    cout << "What is your first exam’s grade? ";
    cin >> grade1;
    cout << "What is your second exam’s grade? ";
    cin >> grade2;
    cout << "What is your third exam’s grade? ";
    cin >> grade2;
    avg = (grade1 + grade2 + grade3) / 3;
    cout << "Hello, " << name << " According to the grades you entered your average is: " << avg << endl;
    return 0;
}