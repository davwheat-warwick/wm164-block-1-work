#include <iostream>
#include <iomanip>
#include <math.h>
#include <string.h>

#include "./main.hpp"

#define EMPLOYEE_COUNT 3

int main()
{
  Payroll employees[EMPLOYEE_COUNT];

  for (int i = 0; i < EMPLOYEE_COUNT; i++)
  {
    long double hours, rate;

    std::cout << "Enter hours worked for employee " << i + 1 << ": ";
    std::cin >> hours;
    std::cout << "Enter pay rate for employee " << i + 1 << ": ";
    std::cin >> rate;

    employees[i].setHours(hours);
    employees[i].setRate(rate);
  }

  for (int i = 0; i < EMPLOYEE_COUNT; i++)
  {
    std::cout << "Employee " << i + 1 << " gross pay: £" << employees[i].getGrossPay() << std::endl;
  }
}

Payroll::Payroll(){};

Payroll::~Payroll()
{
}

long double Payroll::getGrossPay()
{
  return hours * rate;
}

void Payroll::setHours(long double hours)
{
  this->hours = hours;
}
void Payroll::setRate(long double rate)
{
  this->rate = rate;
}
