#include <bits/stdc++.h>
using namespace std;

template <typename T>
T square(T x) {
  return x * x;
}

int main() {
  int a = 3;
  double b = 1.2;

  cout << square<int>(a) << endl;
  cout << square<double>(b) << endl;

  // If it can be deduced from the argument type,
  // the template argument specification can be omitted.
  cout << square(a) << endl;
  cout << square(b) << endl;
}
