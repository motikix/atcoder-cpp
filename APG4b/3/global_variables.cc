#include <bits/stdc++.h>
#include <bitset>
using namespace std;

int number = 10;

const int B = 100;

bitset<B> func1(bitset<B> a) {
  return 100;
}

bitset<B> func2(bitset<B> a) {
  return 100;
}

void change() {
  number = 5;
}

int main() {
  cout << number << endl;

  change();

  cout << number << endl;

  const int a = 10;
  cout << a + 5 << endl;
  // a = 5;
}
