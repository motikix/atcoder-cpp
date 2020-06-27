#include <bits/stdc++.h>
using namespace std;

int f(int x) {
  x = x * 2;
  return x;
}

int main() {
  int a = 3;
  int b = f(a);
  cout << "a: " << a << endl; // 3
  cout << "b: " << b << endl; // 6
}
