#include <iostream>
#include <iomanip>
#include <math.h>

#include "./main.hpp"

#define EXAM_COUNT 3

int main()
{
  double marks = 0;

  for (int i = 0; i < EXAM_COUNT; i++)
  {
    marks += inputExamPercent(i + 1);
  }

  double average = marks / EXAM_COUNT;

  std::cout << std::setprecision(2) << std::fixed << "\nYour average percentage is " << average << "%." << std::endl;
}

double inputExamPercent(int examNum)
{
  double examPercent;

  std::cout << "Enter the percentage for exam " << examNum << ": ";
  std::cin >> examPercent;

  return examPercent;
}
