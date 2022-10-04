#include <iostream>

#include "./main.h"

int main()
{
  double celsius = 0;

  std::cout << "Enter celsius to convert to farenheit: ";
  std::cin >> celsius;

  double fahrenheit = toFarenheit(celsius);

  std::cout << celsius << " celsius is " << fahrenheit << " fahrenheit" << std::endl;
}

double toFarenheit(double celsius)
{
  return celsius * 9 / 5 + 32;
}
