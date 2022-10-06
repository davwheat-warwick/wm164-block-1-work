#include <iostream>
#include <iomanip>
#include <math.h>
#include <string.h>

#include "./main.hpp"

#define SALSA_COUNT (sizeof(SALSA_NAMES) / sizeof(SALSA_NAMES[0]))

const std::string SALSA_NAMES[] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};

int jarsSold[SALSA_COUNT] = {0};

int main()
{
  for (int i = 0; i < SALSA_COUNT; i++)
  {
    std::cout << "Enter the number of jars sold for " << SALSA_NAMES[i] << ": ";
    std::cin >> jarsSold[i];
  }

  printSalesReport();
}

void printSalesReport()
{
  // Sales per jar
  std::cout << std::endl
            << "Sales per jar" << std::endl
            << "-------------" << std::endl;

  for (int i = 0; i < SALSA_COUNT; i++)
  {
    std::cout << SALSA_NAMES[i] << ": " << jarsSold[i] << std::endl;
  }

  // Total sales
  int totalJarsSold = totalSales();
  std::cout << std::endl
            << "Total Jars Sold: " << totalJarsSold << std::endl;

  // Highest/lowest selling salsa
  std::string bestSeller = SALSA_NAMES[indexOfBestSelling()];
  std::string worstSeller = SALSA_NAMES[indexOfWorstSelling()];

  std::cout << "Best Seller: " << bestSeller << std::endl;
  std::cout << "Worst Seller: " << worstSeller << std::endl;
}

int totalSales()
{
  int totalJarsSold = 0;
  for (int i = 0; i < SALSA_COUNT; i++)
  {
    totalJarsSold += jarsSold[i];
  }

  return totalJarsSold;
}

int indexOfBestSelling()
{
  int bestSellingIndex = 0;

  for (int i = 0; i < SALSA_COUNT; i++)
  {
    if (jarsSold[i] > jarsSold[bestSellingIndex])
    {
      bestSellingIndex = i;
    }
  }

  return bestSellingIndex;
}

int indexOfWorstSelling()
{
  int worstSellingIndex = 0;

  for (int i = 0; i < SALSA_COUNT; i++)
  {
    if (jarsSold[i] < jarsSold[worstSellingIndex])
    {
      worstSellingIndex = i;
    }
  }

  return worstSellingIndex;
}
