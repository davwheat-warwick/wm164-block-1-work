#ifndef MAIN_H
#define MAIN_H

class Payroll
{
private:
  long double hours{0};
  long double rate{0};

public:
  Payroll();
  ~Payroll();

  void setHours(long double hours);
  void setRate(long double rate);

  long double getGrossPay();
};

#endif
