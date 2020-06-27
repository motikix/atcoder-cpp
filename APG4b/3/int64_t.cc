#include <bits/stdc++.h>
#include <bits/stdint-intn.h>
#include <cstdint>
using namespace std;

int main() {
  int a = 2000000000;
  int b = a * 2;
  cout << b << endl;

  cout << "==========" << endl;

  int c = (a * 10 + 100) / 100;
  cout << c << endl;

  cout << "==========" << endl;

  int64_t aa = 2000000000;
  int64_t bb = aa * 2;
  cout << bb << endl;

  cout << "==========" << endl;

  cout << 2000000000 * 2 << endl; // int * int -> int
  cout << 2000000000LL * 2LL << endl; // int64_t * int64_t -> int64_t
  cout << 2000000000LL * 2 << endl; // int64_t * int -> int64_t
}
