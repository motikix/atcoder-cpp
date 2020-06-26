#include <bits/stdc++.h>
using namespace std;

int main() {
  string s = "abd";

  if (s.size() < 10 && s.at(10) == 'x') {
    cout << "ok" << endl;
  }

  if (s.at(10) == 'x' && s.size() > 10) {
    cout << "ng" << endl;
  }
}
