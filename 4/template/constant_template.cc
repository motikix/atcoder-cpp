#include <bits/stdc++.h>
#include <tuple>
using namespace std;

template <int INDEX1, int INDEX2>
void tuple_swap(tuple<int, int, int> &x) {
  swap(get<INDEX1>(x), get<INDEX2>(x));
}

template <int MOD>
struct Modulo {
  int x;
  Modulo() {}
  Modulo(int v) {
    x = v % MOD;
  }
  Modulo plus(Modulo<MOD> other) {
    Modulo<MOD> result;
    result.x = (x + other.x) % MOD;
    return result;
  }
};

int main() {
  tuple<int, int, int> x = make_tuple(1, 2, 3);

  tuple_swap<0, 2>(x);
  cout << get<0>(x) << ", " << get<1>(x) << ", " << get<2>(x) << endl;

  tuple_swap<0, 1>(x);
  cout << get<0>(x) << ", " << get<1>(x) << ", " << get<2>(x) << endl;

  Modulo<10> a(7), b(5);
  auto c = a.plus(b);
  cout << c.x << endl;
}
