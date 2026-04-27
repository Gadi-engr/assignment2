#include <iostream>

int main() {
  double n1, p1, k1, n2, p2, k2, n3, p3, k3;

  // Prompts and inputs for Ingredient 1
  std::cout << "Ingredient 1 - Enter n1: ";
  std::cin >> n1;
  std::cout << "Ingredient 1 - Enter p1: ";
  std::cin >> p1;
  std::cout << "Ingredient 1 - Enter k1: ";
  std::cin >> k1;

  // Prompts and inputs for Ingredient 2
  std::cout << "Ingredient 2 - Enter n2: ";
  std::cin >> n2;
  std::cout << "Ingredient 2 - Enter p2: ";
  std::cin >> p2;
  std::cout << "Ingredient 2 - Enter k2: ";
  std::cin >> k2;

  // Prompts and inputs for Ingredient 3
  std::cout << "Ingredient 3 - Enter n3: ";
  std::cin >> n3;
  std::cout << "Ingredient 3 - Enter p3: ";
  std::cin >> p3;
  std::cout << "Ingredient 3 - Enter k3: ";
  std::cin >> k3;

  // Intermediate values to simplify complex formulas
  double a = n1 - n3;
  double b = n2 - n3;
  double c = p1 - p3;
  double d = p2 - p3;
  double e = k1 - k3;
  double f = k2 - k3;

  // Solving for M1 using the formula provided in instructions
  double m1_num = (p3 - n3) * (b - f) - (k3 - n3) * (b - d);
  double m1_den = (a - e) * (b - d) - (a - c) * (b - f);
  double m1 = m1_num / m1_den;

  // Solving for M2 using M1
  double m2 = ((p3 - n3) - m1 * (a - c)) / (b - d);

  // Solving for M3
  double m3 = 1 - m1 - m2;

  // Calculating total proportions for Nitrogen, Phosphorus, and Potassium
  double total_n = m1 * n1 + m2 * n2 + m3 * n3;
  double total_p = m1 * p1 + m2 * p2 + m3 * p3;
  double total_k = m1 * k1 + m2 * k2 + m3 * k3;

  // Output all results
  std::cout << "\nMixing Proportions:" << std::endl;
  std::cout << "M1: " << m1 << std::endl;
  std::cout << "M2: " << m2 << std::endl;
  std::cout << "M3: " << m3 << std::endl;

  std::cout << "\nFinal Balanced NPK Proportions:" << std::endl;
  std::cout << "Total Nitrogen: " << total_n << std::endl;
  std::cout << "Total Phosphorus: " << total_p << std::endl;
  std::cout << "Total Potassium: " << total_k << std::endl;

  return 0;
}
