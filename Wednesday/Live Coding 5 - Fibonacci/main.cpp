#include <iostream>

#include "./main.hpp"

int main()
{
  int n1 = 0,
      n2 = 1,
      max = 0;

  std::cout << "Enter a positive number to iterate until: ";
  std::cin >> max;

  std::cout << n1 << ", " << n2;

  while (n1 + n2 <= max)
  {
    std::cout << ", ";
    int temp = n1 + n2;
    n1 = n2;
    n2 = temp;
    std::cout << temp;
  }
}
