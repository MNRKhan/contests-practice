#include <iostream>

// brute force prime finder
bool isPrime(int *number)
{
  for (int i = 2; i <= *number / 2; i++)
    if (!(*number % i))
      return false;

  return true;
}

int main()
{
  int N;
  std::cin >> N;

  int count = 0;
  int number = 2;

  while (count < N)
  {
    if (isPrime(&number))
    {
      std::cout << number << std::endl;
      number++;
      count++;
    }
    else
      number++;
  }
  return 0;
}