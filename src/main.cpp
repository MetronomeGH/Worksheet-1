#include <iostream>

int main()
{
  std::cout << "Hello, world!\n ";

  int a = 0;
  int b = 3;
  std::cout << "Please enter a number: ";
  std::cout << "Please enter a second number: ";

  std::cin >> a;
  std::cin >> b;

  std::cout << "Your number is " << a + b << std::endl;
  if (a > b)
  {
    std::cout << "The first number is greater than the second number."
              << std::endl;
  }
  else if (a < b)
  {
    std::cout << "The first number is less than the second number."
              << std::endl;
  }
  else
  {
    std::cout << "The two numbers are equal." << std::endl;
  }

  return 0;
}
