#include <bits/stdc++.h>
#include <cstdint>
using namespace std;

void print_int(int x) {
  cout << "x = " << x << endl;
}

int main() {
  double a = 1.2345;
  int b = 1;

  cout << a + b << endl; // == a + (double)b

  int c = 2000000000;
  int64_t d = 100;

  cout << c * d << endl; // == (int64_t)c * d

  double e = 3.141592;
  int f = e; // double -> int
  cout << f << endl;

  print_int(e); // double -> int
}
