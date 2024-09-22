#include <iostream>
using namespace std;

bool is_leap_year(int y)
{
  if (y % 400 == 0)
  {
    return true;
  }
  else if (y % 4 == 0 && y % 100 != 0)
  {
    return true;
  }
  return false;
}

int main()
{

  int year = 2000;

  bool result = is_leap_year(year);
  if (result)
  {
    std::cout << year << " is a leap year." << std::endl;
  }
  else
  {
    std::cout << year << " is not a leap year." << std::endl;
  }

  return 0;
}
