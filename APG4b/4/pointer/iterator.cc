#include <bits/stdc++.h>
#include <vector>
using namespace std;

void f(int &ref) {
  ref = 2;
}

void g(int *ptr) {
  *ptr = 2;
}

int main() {
  int x = 1;
  f(x);
  cout << x << endl;

  int y = 1;
  g(&y);
  cout << y << endl;
  
  vector<int> a = { 1, 2, 3 };
  for (auto it = a.begin(); it != a.end(); it++) {
    cout << *it << endl;
  }

  vector<int> b = { 1, 2, 3};
  int *begin_addr = b.data();
  for (int *ptr = begin_addr; ptr < begin_addr + 3; ptr = ptr + 1) {
    cout << *ptr << endl;
  }
}
