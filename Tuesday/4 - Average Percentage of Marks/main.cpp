#include <iostream>
#include <math.h>

#include "./main.h"

#define EXAM_COUNT 3
#define PRECISION 2

#define PRECISION_MULT pow(10, PRECISION)

int main()
{
  double marks = 0;

  for (int i = 0; i < EXAM_COUNT; i++)
  {
    marks += inputExamPercent(i + 1);
  }

  double average = customRound(marks / EXAM_COUNT);

  std::cout << "\nYour average percentage is " << average << "%." << std::endl;
}

double customRound(double val)
{
  return round(val * PRECISION_MULT) / PRECISION_MULT;
}

double inputExamPercent(int examNum)
{
  double examPercent;

  std::cout << "Enter the percentage for exam " << examNum << ": ";
  std::cin >> examPercent;

  return examPercent;
}
