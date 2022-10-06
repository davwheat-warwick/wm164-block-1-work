#ifndef MAIN_H
#define MAIN_H

class MovieData
{
private:
  std::string title;
  std::string director;
  int yearReleased;
  int runningTime;

public:
  MovieData(std::string title, std::string director, int yearReleased, int runningTime);
  ~MovieData();

  std::string getTitle();
  std::string getDirector();
  int getYearReleased();
  int getRunningTime();
};

void displayMovie(MovieData movie);

#endif
