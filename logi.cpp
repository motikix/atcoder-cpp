#include <iostream>

int main() {
  int x, y;
  std::cin >> x >> y;

  if (!(x == y)) {
    std::cout << "xとyは等しくない" << std::endl;
  }

  if (x == 10 && y == 10) {
    std::cout << "xとyは10" << std::endl;
  }

  if (x == 0 || y == 0) {
    std::cout << "xかyは0" << std::endl;
  }
  
  std::cout << "終了" << std::endl;
}
