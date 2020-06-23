#include <iostream>
using namespace std;

int main() {
  double exams, grade, total = 0, avg;
  cout << "Entre exams";
  cin >> exams;
  double arr[exams];
  for (int i=0; i<=exams; i++){
		cout << "Please enter your grade" << endl;
		cin >> grade;
		total += grade;
  }
  avg = total / exams;
  cout << "AVG = " << avg;
}
