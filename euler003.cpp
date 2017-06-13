// PROJECT EULER
// Problem 1: Multiples of 3 and 5
// Alexander Ainsworth
// 08/06/2017

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
  long n = 600851475143, factor = 2;

  while (factor < n)
  {
    while (n % factor == 0)
    {
      n /= factor;
    }

    factor += 1;
  }

  cout << "The largest prime factor of 600851475143 is " << factor << ".\n";
  return 0;
}
