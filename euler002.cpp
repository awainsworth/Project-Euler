// PROJECT EULER
// Problem 2: Even Fibonacci Numbers
// Alexander Ainsworth
// 08/06/2017

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
  int fib0 = 1, fib1 = 2, sum = 2;

  while (fib0 + fib1 <= 4 * pow(10, 6))
  {
    if ((fib0 + fib1) % 2 == 0)
    {
      sum += fib0 + fib1;
    }

    fib1 += fib0;
    fib0 = fib1 - fib0;
  }

  cout << "The sum of all even Fibonacci numbers less than 4 million is " << sum << ".\n";
  return 0;
}
