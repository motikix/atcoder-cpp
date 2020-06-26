#include <bits/stdc++.h>
using namespace std;

int main() {
  int x = 5;  // 0101
  int y = 10; // 1010

  // if (x & y > 0) {}  // `>` operator has higher priority than `&`
  if ((x & y) > 0) {
    cout << "yes" << endl;
  } else {
    cout << "no" << endl;
  }
}
