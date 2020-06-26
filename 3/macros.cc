#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define my_cout cout <<

#define is_not_5(n) if (n != 5)

#define my_macro cout << "hello" << endl; \
cout << "AtCoder" << endl; \
cout << "C++" << endl;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

#define all(v) v.begin(), v.end()

int main() {
  my_cout "hello";

  is_not_5(10) {
    cout << "NOT 5" << endl;
  }

  my_macro;

  rep(i, 10) {
    cout << i << endl;
  }

  vector<int> v = { 2, 3, 1 };
  sort(all(v));
  cout << v.at(0) << endl;
}
