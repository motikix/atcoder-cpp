#include <bits/stdc++.h>
#include <bitset>
using namespace std;

int main() {
  for (int tmp = 0; tmp < (1 << 3); tmp++) {
  // for (int tmp = 0; tmp < 8; tmp++) {
    bitset<3> s(tmp);
    cout << s << endl;
  }
}
