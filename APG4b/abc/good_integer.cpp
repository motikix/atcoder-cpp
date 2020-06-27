#include <iostream>
int main() {
  int n;
  std::cin >> n;

  if (!(n / 10 % 111) || !(n % 1000 % 111)) {
    std::cout << "Yes" << std::endl;
  } else {
    std::cout << "No" << std::endl;
  }
}
