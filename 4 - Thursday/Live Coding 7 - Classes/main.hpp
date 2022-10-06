#ifndef MAIN_H
#define MAIN_H

class Car
{
private:
  /* data */
  int year{0};
  std::string make;
  int speed{0};

public:
  Car(int year, std::string make);
  ~Car();

  int getYear();
  // void setYear(int year);

  std::string getMake();
  // void setMake(std::string make);

  int getSpeed();
  // void setSpeed(int speed);

  void accelerate();
  void brake();
};

#endif