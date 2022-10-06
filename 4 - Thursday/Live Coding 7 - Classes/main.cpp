#include <iostream>
#include <vector>
#include <string.h>

#include "./main.hpp"

int main()
{
  std::vector<Car> cars;

  cars.push_back(Car(2016, "Ford"));
  cars.push_back(Car(2017, "Hyundai"));
  cars.push_back(Car(2018, "Toyota"));

  // accelerate all cars
  for (Car &c : cars)
  {
    // pass referentially, otherwise C++ will make copies for this scope
    c.accelerate();
    c.accelerate();
    c.accelerate();
    c.accelerate();
  }

  cars[1].brake();
  cars[1].brake();

  cars[2].brake();
  cars[2].accelerate();
  cars[2].accelerate();

  for (Car c : cars)
  {
    std::cout << "The " << c.getYear() << " " << c.getMake() << " is travelling at " << c.getSpeed() << "mph" << std::endl;
  }
}

Car::Car(int year, std::string make) : year(year), make(make)
{
}

Car::~Car()
{
}

void Car::accelerate()
{
  speed += 5;
}

void Car::brake()
{
  speed -= 5;
}

int Car::getYear()
{
  return year;
}

std::string Car::getMake()
{
  return make;
}

int Car::getSpeed()
{
  return speed;
}
