#include <iostream>
#include <iomanip>
#include <math.h>
#include <string.h>

#include "./main.hpp"

int main()
{
  MovieData movie1 = MovieData("The Godfather", "Francis Ford Coppola", 1972, 175);
  MovieData movie2 = MovieData("The Shawshank Redemption", "Frank Darabont", 1994, 142);

  displayMovie(movie1);
  displayMovie(movie2);
}

void displayMovie(MovieData movie)
{
  std::cout << std::endl
            << "Title: " << movie.getTitle() << std::endl;
  std::cout << "Director: " << movie.getDirector() << std::endl;
  std::cout << "Year Released: " << movie.getYearReleased() << std::endl;
  std::cout << "Running Time: " << movie.getRunningTime() << std::endl;
}

MovieData::MovieData(std::string title, std::string director, int yearReleased, int runningTime) : title(title), director(director), yearReleased(yearReleased), runningTime(runningTime){};

MovieData::~MovieData()
{
}

std::string MovieData::getTitle() { return title; }
std::string MovieData::getDirector() { return director; }
int MovieData::getYearReleased() { return yearReleased; }
int MovieData::getRunningTime() { return runningTime; }
