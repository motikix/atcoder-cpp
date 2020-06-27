#include <iostream>
using namespace std;

int main() {
  string S;
  cin >> S;

  int plus, minus = 0;

  for (int i = 0; i < S.size(); i++) {
    if (S.at(i) == '+') plus++;
    else if (S.at(i) == '-') minus++;
  }

  cout << 1 + plus - minus << endl;
}
