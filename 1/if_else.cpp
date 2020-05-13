#include <iostream>

int main() {
  int x;
  std::cin >> x;

  if (x < 10) {
    std::cout << "xは10より小さい" << std::endl;
  } else {
    std::cout << "xは10より小さくない" << std::endl;
  }
}
