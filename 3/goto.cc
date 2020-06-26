#include <bits/stdc++.h>
using namespace std;

int main() {
  cout << "Hello, ";
  goto SKIP;
  cout << "world!" << endl;
SKIP:
  cout << "AtCoder!" << endl;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << i << " " << j << endl;
      if (i == 1 && j == 1) {
        goto OUT;
      }
    }
  }
OUT:
  cout << "fin" << endl;
}
