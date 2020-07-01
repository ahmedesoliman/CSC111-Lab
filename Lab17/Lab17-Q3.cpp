#include <iostream>
using namespace std;
int main()
{
    int user_entre_size;
    int boxes[howlongisit], total = 0, average, *tomato;
    tomato = boxes;
    cout << "Entre size of Array: ";
    cin >> user_entre_size;
    for (int index = 0; index < user_entre_size; index++)
    {
        cout << "Entre elements #" << index + 1 << " : ";
        cin >> boxes[index];
        total += *tomato;
        tomato++;
    }
    cout << "Your Average is: " << total / size;
}
