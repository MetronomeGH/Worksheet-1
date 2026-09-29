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

  return 0;
}
