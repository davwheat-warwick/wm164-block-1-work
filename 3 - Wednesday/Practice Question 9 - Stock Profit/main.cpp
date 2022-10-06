#include <iostream>
#include <iomanip>
#include <math.h>
#include <string.h>

#include "./main.hpp"

int main()
{
  int shareCount = 0;
  long double sharePrice = 0,
              saleCommission = 0,
              purchasePrice = 0,
              purchaseCommission = 0;

  std::cout << "Enter the number of shares: ";
  std::cin >> shareCount;

  std::cout << "Enter the price per share: ";
  std::cin >> sharePrice;

  std::cout << "Enter the sale commission: ";
  std::cin >> saleCommission;

  std::cout << "Enter the purchase price: ";
  std::cin >> purchasePrice;

  std::cout << "Enter the purchase commission: ";
  std::cin >> purchaseCommission;

  std::cout << std::setprecision(2) << std::fixed;

  long double profit = calculateStockProfit(shareCount, sharePrice, saleCommission, purchasePrice, purchaseCommission);

  if (profit >= 0)
  {
    std::cout << "The profit is £" << profit << std::endl;
  }
  else
  {
    std::cout << "The loss is £" << profit * -1 << std::endl;
  }
}

long double calculateStockProfit(int shareCount, long double sharePrice, long double saleCommission, long double purchasePrice, long double purchaseCommission)
{
  return ((shareCount * sharePrice) - saleCommission) - ((shareCount * purchasePrice) + purchaseCommission);
}
