#include <bits/stdc++.h>
#include <memory>
#include <type_traits>
using namespace std;

int main() {
  unique_ptr<int> p1 = make_unique<int>(123);
  *p1 += 1;
  cout << *p1 << endl;

  unique_ptr<int> p2;
  p2 = move(p1);

  // *p1 += 10;
  *p2 += 1;
  cout << *p2 << endl;
}
