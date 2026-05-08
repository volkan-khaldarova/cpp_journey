#include <iostream>
#include <cmath>

int main() {
  // First things first, let’s declare 3 variables
  double a, b, c;
  
  // Output this prompt for the user
  std::cout << "Enter a: ";
  std::cin >> a;

  std::cout << "Enter b: ";
  std::cin >> b;

  std::cout << "Enter c: ";
  std::cin >> c;

  // Let’s declare two variables to store the roots:
  double root1, root2;

  root1 = (-b + std::sqrt(b*b - 4*a*c)) / (2*a);

  root2 = (-b - std::sqrt(b*b - 4*a*c)) / (2*a);

  // Outputting the roots
  std::cout << "Root 1 is " << root1 << "\n";
  std::cout << "Root 2 is " << root2 << "\n";

}