#include <iostream>
#include <cstdlib>
#include <ctime>

#include "./main.hpp"

int main()
{
  // provide RNG with a basic time-based seed
  srand(time(NULL));

  char coin = ' ';

  std::cout << "Heads (H) or Tails? (T): ";
  std::cin >> coin;

  // enforce caps for consistency
  coin = (char)toupper(coin);

  if (coin != 'H' && coin != 'T')
  {
    // invalid input - exit with error code
    std::cout << "Invalid input" << std::endl;
    return 1;
  }

  // rand() generates a random num between 0 and a predefined max
  // mod 2 ensures this value is always 0 or 1 instead
  int rngNum = rand() % 2;

  // allows for direct comparison to user entry
  char randomCoin = rngNum == 0 ? 'H' : 'T';

  if (coin == randomCoin)
  {
    std::cout << "You win." << std::endl;
  }
  else
  {
    std::cout << "You lose." << std::endl;
  }
}
