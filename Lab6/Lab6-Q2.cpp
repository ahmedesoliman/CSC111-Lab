#include <iostream>

using namespace std;

int main () {
  int number = 10;
  while (number >= 10 && number <= 100){
    if (number % 5 == 0){
      cout << number << endl;
    }
  number++;
  }
  
  return 0;
}