#include <iostream>

int main() {
  int n, a, amount;
  
  std::cin >> n >> a;

  if (n >= 500) {
    n %= 500;
  }

  if (a >= n) {
    std::cout << "Yes" << std::endl;
  } else {
    std::cout << "No" << std::endl;
  }
}
