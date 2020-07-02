#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> listEvens(int n)
{
    vector<int> result;
    for (int i = 0; i < n; i += 2)
        result.push_back(i);
    return result;
}

void printVector(const vector<int> vec)
{
    cout << "The vector is";
    if (vec.size() == 0)
        cout << " empty";
    else
        for (int i = 0; i < vec.size(); ++i)
            cout << ' ' << vec[i];
    cout << '\n';
}

int main()
{
    cout << "Testing listEvens function:\n";
    vector<int> test1 = listEvens(3);
    printVector(test1); // "The vector is 0 2"
    vector<int> test2 = listEvens(12);
    printVector(test2); // "The vector is 0 2 4 6 8 10 12"
    vector<int> test3 = listEvens(-3);
    printVector(test3); // "The vector is empty"
    cout << '\n';
}
