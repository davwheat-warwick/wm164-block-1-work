#include <iostream>
#include <iomanip>
#include <math.h>
#include <string.h>
#include <vector>
#include <tuple>

#include "./main.hpp"

#define CAR_COUNT 3
#define MILES_TRAVELLED 500

int main()
{
  std::vector<car> cars;

  for (int i = 1; i <= CAR_COUNT; ++i)
  {
    cars.push_back(inputCarData(i));
    calcMPG(MILES_TRAVELLED, cars[i - 1]);
  }

  car mostEfficientCar;

  for (car c : cars)
  {
    if (c.mpg > mostEfficientCar.mpg)
    {
      mostEfficientCar = c;
    }
  }

  std::cout << std::setprecision(2) << std::fixed;
  std::cout << "The most efficient car is the '" << mostEfficientCar.make << "' with an MPG of " << mostEfficientCar.mpg << std::endl;
}

void calcMPG(long double distance, car &car)
{
  car.mpg = distance / car.fuelUsed;
}

car inputCarData(int carNum)
{
  car thisCar;

  printf("Enter the make of the car %d: ", carNum);
  std::getline(std::cin, thisCar.make);

  printf("How many gallons of fuel did car %d (%s) use? ", carNum, thisCar.make.c_str());
  std::cin >> thisCar.fuelUsed;

  // flush input buffer
  std::cin.ignore();

  return thisCar;
}
