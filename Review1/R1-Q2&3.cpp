#include <iostream>
using namespace std;

class TempScale{ 
public:
  double fahrenheit;
  double celsius; 
 }; 

class Reading{ 
public:
 int windSpeed; 
 double humidity;
 TempScale temperature;
};

void showReading(Reading input){
  cout << "\n --------------------- \n";
  cout << "Wind Speed: " << input.windSpeed << endl;
  cout << "Humiditiy: " << input.humidity << endl;
  cout << "Fehrenheit temperature: " << input.temperature.fahrenheit << endl;
  cout << "celsius temperature: " << input.temperature.celsius << endl; 
}

void inputReading(Reading &input){
  cout << "Enter windSpeed: ";
  cin >> input.windSpeed;
  cout << "Entre Humidity: ";
  cin >> input.humidity;
  cout << "Enter fehrenheit temperature: ";
  cin >> input.temperature.fahrenheit;
  cout << "Enter celsius temperature: ";
  cin >> input.temperature.celsius;
}



int main(){
  Reading input;
  inputReading(input);
  showReading(input);

};
 