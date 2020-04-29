#include <iostream>
#include <iterator>
#include <ostream>

int main() {
  int x;
  std::cin >> x;

  if (x < 10) {
    std::cout << "xは10より小さい" << std::endl;
  }

  if (x >= 20) {
    std::cout << "xは20以上" << std::endl;
  }

  if (x == 5) {
    std::cout << "xは5" << std::endl;
  }

  if (x != 100) {
    std::cout << "xは100ではない" << std::endl;
  }

  std::cout << "終了" << std::endl;
}
