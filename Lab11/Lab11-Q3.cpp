#include <iostream>
using namespace std;
int main()

{
  bool result;
  int num, n;
  for (n = 61; n < 600; n++)
  {
    result = true;
    for (num = 61; num < n; num++)
    {
      if (n % num == 0)
      {
        result = false;
      }
    }
    if (result == true)
      cout << n << endl;
  }
  return 0;
}