#include <iostream>
#include <math.h>

#include "./main.h"

int main()
{
  int number = 0;
  int absNumber = 0;

  std::cout << "Enter num: ";
  std::cin >> number;

  if (number < 0)
  {
    absNumber = -number;
  }
  else
  {
    absNumber = number;
  }

  std::cout << "The absolute value of " << number << " is " << absNumber << std::endl;
}

/**
 * My preferred solution, if the conditional operators requirement was not present.
 */
int betterMain()
{
  int number = 0;

  std::cout << "Enter num: ";
  std::cin >> number;

  int absNumber = abs(number);

  std::cout << "The absolute value of " << number << " is " << absNumber << std::endl;

  // optional for main, but since this is a stub method when
  // compiling, we need to return something.
  return 0;
}
