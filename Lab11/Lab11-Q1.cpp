// Question1: Write a C++ program that prints all prime numbers between 60 and 600.
#include <iostream>
using namespace std;

int findprime(int);

int main()
{
   bool status;
   for (int n = 61; n < 600; n++)
   {
      status = findprime(n);

      if (status == true)
         cout << n << endl;
   }
   return 0;
}

int findprime(int n)
{
   bool status = true;
   for (int i = 61; i <= n / 2; i++)
   {
      if (n % i == 0)
      {
         status = false;
      }
   }
   return status;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//   bool status;
//   int i, n;
//   for (int n = 61; n < 600; n++){
//       status = true;
//     for (int i = 61; i < n; i++){
//       if (n % i == 0){
//       status = false;
//       }
//     }
//   if (status == true)
//     cout << n << endl;
//   }
//   return 0;
// }