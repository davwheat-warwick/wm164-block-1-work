#include <iostream>
#include <iomanip>

#include "./main.hpp"

#define START_TONS 2
#define END_TONS 20
#define INCREMENT_TONS 2

#define DATA_ROWS ((END_TONS - START_TONS) / INCREMENT_TONS + 1)

int main()
{
  double data[DATA_ROWS][3] = {0};

  int i = 0;

  for (int tons = START_TONS; tons <= END_TONS; tons += INCREMENT_TONS)
  {
    data[i][0] = static_cast<double>(tons);
    data[i][1] = static_cast<double>(toPound(tons));
    data[i][2] = toKg(tons);
    ++i;
  }

  std::cout << "Tons\tPounds\tKilograms" << std::endl;

  for (int i = 0; i < DATA_ROWS; ++i)
  {
    std::cout << data[i][0] << "\t" << data[i][1] << "\t";
    printWithDp(data[i][2]);
    std::cout << std::endl;
  }
}

int toPound(int tons)
{
  return tons * 2240;
}

double toKg(int tons)
{
  return tons * 1016.05;
}

void printWithDp(double val)
{
  std::streamsize ss = std::cout.precision();

  std::cout << std::setprecision(2) << std::fixed << val << std::setprecision(ss);
  // restore old stream flags
  std::cout.unsetf(std::ios_base::fixed);
}
