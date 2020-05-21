#include <bits/stdc++.h>
using namespace std;

int main() {
  int a = 3;
  int &b = a; // `b` is a reference to `a`

  cout << "a: " << a << endl; // 3
  cout << "b: " << b << endl; // 3

  b = 4;

  cout << "a: " << a << endl; // 4
  cout << "b: " << b << endl; // 4
}
