#include <iostream>
#include <math.h>
#include <string.h>

#include "./main.hpp"

#define EXAM_COUNT 3
#define PRECISION 2

#define PRECISION_MULT pow(10, PRECISION)

int main()
{
  int seconds = 0;

  std::cout << "Enter a time in seconds:" << std::endl;
  std::cin >> seconds;

  std::string unit = "seconds";
  double value = 0;

  if (seconds >= 86400)
  {
    // use days
    unit = "days";
    value = seconds / 86400.0;
  }
  else if (seconds >= 3600)
  {
    // use hours
    unit = "hours";
    value = seconds / 3600.0;
  }
  else if (seconds >= 60)
  {
    // use minutes
    unit = "minutes";
    value = seconds / 60.0;
  }
  else
  {
    // use seconds
    value = seconds;
  }

  std::cout << seconds << " seconds is " << value << " " << unit << std::endl;
}
