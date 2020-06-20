#include <iostream>

using namespace std;

int main()
{
    string cellphone, carier;
    cout << "Please enter your cellphone type: ";
    getline(cin, cellphone);

    cout << "Please entre your phone carrier: ";
    cin >> carier;
    if (cellphone == "Samsung Note 10" && carier == "Verizon")
        cout << "Your promotion is $300";
    else if (cellphone == "Iphone11" && carier == "Verizon")
        cout << "Your promotion is $100";
    else if (cellphone == "Samsung Note 10" && carier == "T-Mobile")
        cout << "Your promotion is half a price of the second phone";
    else if (carier == "Boost")
        cout << "You get a free apple watch!";
    else if (cellphone == "Google Pixel" && (carier == "AT&T" || carier == "Verizon"))
        cout << "Your promotion is one year free YouTube";
    else if (cellphone == "Iphone11" && carier == "Sprint")
        cout << "Your promotion is iphone8 with half price";
    else
        cout << "No Promotion Avialable";
    return 0;
}
