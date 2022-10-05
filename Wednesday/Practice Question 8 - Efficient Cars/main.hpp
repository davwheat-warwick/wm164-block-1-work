struct car
{
  std::string make;
  long double fuelUsed;
  long double mpg{-1.0};
};

void calcMPG(long double distance, car &car);
car inputCarData(int carNum);
