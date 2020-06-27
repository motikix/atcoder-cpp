#include <iostream>
int main() {
  int n, a, b, p1, p2;
  std::cin >> n >> a >> b;

  p1 = a * n;
  p2 = b;

  if (p1 <= p2) std::cout << p1 << std::endl;
  else std::cout << p2 << std::endl;
}
