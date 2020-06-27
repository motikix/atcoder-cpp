#include <bits/stdc++.h>
#include <bitset>
#include <cstdint>
using namespace std;

int main() {
  uint32_t x = 0b100;
  cout << x << endl; // 4
  cout << (x | 0b010) << endl; // 0b110 = 6

  int a = 100;
  bitset<8> b(a);
  cout << b << endl;
  cout << b.to_ullong() << endl;

  int c = -100;
  bitset<8> d(c);
  cout << d << endl;
  cout << d.to_ullong() << endl;

  cout << (b >> 2) << endl;
  cout << (d >> 2) << endl;
}
