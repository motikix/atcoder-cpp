#include <iostream>
using namespace std;

int main() {
  int n, l, r;

  cin >> n;

  int used = 0;
  for (int i = 0; i < n; i++) {
    cin >> l >> r;
    used += (r - l + 1);
  }

  cout << used << endl;
}
