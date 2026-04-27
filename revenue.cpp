#include <iostream>
#include <cmath>

int main() {
  double b, rp, cp;

  std::cout << "Enter base cost (b): ";
  std::cin >> b;
  std::cout << "Enter revenue per product (rp): ";
  std::cin >> rp;
  std::cout << "Enter manufacturing cost per product (cp): ";
  std::cin >> cp;

  // Formula: N = b / (rp - cp)
  double n = b / (rp - cp);
  int min_units = std::ceil(n);

  std::cout << "Minimum units to break even: " << min_units << std::endl;

  return 0;
}
