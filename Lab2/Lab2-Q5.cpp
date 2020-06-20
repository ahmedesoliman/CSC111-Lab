// Question5: ask the user to enter 3 integer numbers and find the %20 of the first number, %30 of the second number and %40 of the third number and print the answers.

// Note: you should use one cout and each answer should be printed in the new line

// Example: user enters 100 for all 3 numbers then your output should be like the following:

// 10 percent of the first number is 10

// 20 percent of the second number is 20

// 30 percent of the third number is 30
#include <iostream>
using namespace std;

int main(){
  int num1, num2, num3, per1, per2, per3;
  cout << "Entre first integer numbers: ";
  cin >> num1;
  cout << "Enter second integer numbers: ";
  cin >> num2;
  cout << "Entre third integer numbers: ";
  cin >> num3;
  per1 = 0.10 * num1;
  per2 = 0.20 * num2;
  per3 = 0.30 * num3;
  cout << "10 percent of the first number is " << per1 << endl 
  << "20 percent of the second number is " << per2 
  << endl 
  << "30 percent of the third number is " << per3 
  << endl;
return 0;
}