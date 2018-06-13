#include <iostream>

int main()
{
  int T, number;
  std::cin >> T;

  for (int i = 0; i < T; i++)
  {
    std::cin >> number;

    if (number >= 80 && number <= 100)
    {
      std::cout << "A" << std::endl;
    }
    else if (number >= 70 && number <= 79)
    {
      std::cout << "B" << std::endl;
    }
    else if (number >= 60 && number <= 69)
    {
      std::cout << "C" << std::endl;
    }
    else if (number >= 50 && number <= 59)
    {
      std::cout << "D" << std::endl;
    }
    else if (number >= 0 && number <= 49)
    {
      std::cout << "F" << std::endl;
    }
    else
    {
      std::cout << "X" << std::endl;
    }
  }
}