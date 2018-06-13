#include <iostream>
#include <iomanip>

int main()
{
  int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int N;
  std::cin >> N;

  int month = 0;

  while (N > months[month])
  {
    N -= months[month];
    month++;
  }

  std::cout << std::setfill('0') << std::setw(2);
  std::cout << month + 1;
  std::cout << "/";
  std::cout << std::setfill('0') << std::setw(2);
  std::cout << N;

  return 0;
}