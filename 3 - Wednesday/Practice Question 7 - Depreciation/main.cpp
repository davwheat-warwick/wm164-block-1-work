#include <iostream>
#include <iomanip>
#include <math.h>

#include "./main.hpp"

#define YEAR_COUNT 10

/**
 * Depreciation by year
 *
 * Last value is used to extrapolate depretiation across any more years
 */
const long double DEPRECIATION[] = {0.2, 0.15, 0.1};

// Number of items in the DEPRECIATION array
const int DEPRECIATION_COUNT = sizeof(DEPRECIATION) / sizeof(DEPRECIATION[0]);

int main()
{
  long double vehicleCost = 0;

  std::cout << "Enter the initial cost of the car: ";
  std::cin >> vehicleCost;

  // Initial cost
  std::cout << "Year 0: ";
  printMoneyWithDp(vehicleCost);
  std::cout << std::endl;

  for (int year = 1; year <= YEAR_COUNT; ++year)
  {
    // Choose year-based depreciation, using last item in array if year is out of range
    const int depreciationIndex = std::min(year - 1, DEPRECIATION_COUNT - 1);
    const long double depreciation = DEPRECIATION[depreciationIndex];

    vehicleCost *= 1 - depreciation;

    std::cout << "Year " << year << ": ";
    printMoneyWithDp(vehicleCost);
    std::cout << std::endl;
  }
}

void printMoneyWithDp(double val, int precision)
{
  std::streamsize ss = std::cout.precision();

  std::cout << std::setprecision(precision) << std::fixed << "£" << val << std::setprecision(ss);

  // restore old stream flags
  std::cout.unsetf(std::ios_base::fixed);
}
