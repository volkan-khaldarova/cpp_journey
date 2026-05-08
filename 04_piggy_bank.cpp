#include <iostream>

int main() {
  double pesos, reais, soles;
  double dollars;
  
  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;

  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;

  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;

  // Pesos conversion rate: 0.054
  // Reais conversion rate: 0.19
  // Soles conversion rate: 0.30
  dollars = 0.054 * pesos + 0.19 * reais + 0.30 * soles;

  std::cout << "Total USD = $" << dollars << "\n";


}