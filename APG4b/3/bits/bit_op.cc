#include <bits/stdc++.h>
#include <bitset>
using namespace std;

int main() {
  bitset<8> a("00011011");
  bitset<8> b("00110101");

  auto c = a & b;
  cout << "1: " << c << endl;        // 1: 00010001
  cout << "2: " << (c << 1) << endl; // 2: 00100010
  cout << "3: " << (c << 2) << endl; // 3: 01000100
  cout << "4: " << (c << 3) << endl; // 4: 10001000
  cout << "5: " << (c << 4) << endl; // 5: 00010000

  c <<= 4;
  c ^= bitset<8>("11010000"); // XOR compound assignment operator
  cout << "6: " << c << endl; // 6: 11000000

  bitset<4> S;
  S.set(0, 1);
  cout << S << endl; // 0001

  if (S.test(3)) {
    cout << "4th bit is 1" << endl;
  } else {
    cout << "4th bit is 0" << endl;
  }
}
