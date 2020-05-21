#include <algorithm>
#include <bits/stdc++.h>
#include <tuple>
#include <vector>
using namespace std;

int main() {
  vector<tuple<int, int, int>> a;
  a.push_back(make_tuple(3, 1, 1));
  a.push_back(make_tuple(1, 2, 100));
  a.push_back(make_tuple(3, 5, 1));
  a.push_back(make_tuple(1, 2, 3));
  sort(a.begin(), a.end());

  for (tuple<int, int, int> t : a) {
    int x, y, z;
    tie(x, y, z) = t;
    cout << x << " " << y << " " << z << endl;
  }
}
