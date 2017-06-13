// PROJECT EULER
// Problem 1: Multiples of 3 and 5
// Alexander Ainsworth
// 08/06/2017

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int sum = 0;
  for (int i = 1; i < 67; i++)
  {
    sum -= 7*i;
  }
  for (int i = 67; i < 200; i++)
  {
    sum += 8*i;
  }
  for (int i = 200; i < 334; i++)
  {
    sum += 3*i;
  }

  cout << "The sum of numbers less than 1000 and divisible by 3 or 5 is " << sum << "\n";
  return 0;
}
