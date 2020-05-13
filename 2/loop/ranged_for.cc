#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  vector<int> a = {1, 3, 2, 5};
  for (int x : a) {
    cout << x << endl;
  }

  vector<int> b = {1, 3, 1, 2, 5, 10};
  for (int x : b) {
    if (x == 1) {
      continue;
    }

    if (x == 5) {
      break;
    }

    cout << x << endl;
  }

  string str = "hello";
  for (char c : str) {
    if (c == 'l') {
      c = 'L';
    }
    cout << c;
  }
  cout << endl;
}
