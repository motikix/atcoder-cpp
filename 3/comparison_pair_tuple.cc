#include <bits/stdc++.h>
#include <utility>
using namespace std;

int main() {
  pair<int, int> a(3, 1);
  pair<int, int> b(2, 10);

  if (a < b) {
    cout << "a < b" << endl;
  } else {
    cout << "a >= b" << endl;
  }

  pair<int, int> c(5, 1);
  pair<int, int> d(5, 10);

  if (c < d) {
    cout << "c < d" << endl;
  } else {
    cout << "c >= d" << endl;
  }
}
