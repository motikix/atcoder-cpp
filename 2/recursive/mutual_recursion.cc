#include <bits/stdc++.h>
using namespace std;

bool is_even(int);
bool is_odd(int);

bool is_even(int n) {
  if (n == 0) {
    return true;
  }
  return is_odd(n - 1);
}

bool is_odd(int n) {
  if (n == 0) {
    return false;
  }
  return is_even(n - 1);
}

int main() {
  cout << is_even(4) << endl; // 1
  cout << is_odd(5) << endl;  // 1
  cout << is_even(3) << endl; // 0
}
