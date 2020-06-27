#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }

  int prev = 0;
  for (int i = 0; i < 4; i++) {
    if (data.at(i) == data.at(i + 1)) {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
}
