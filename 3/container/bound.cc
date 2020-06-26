#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  // Vector sorted in ascending order
  vector<int> a = {0, 10, 13, 14, 20};

  // >= 12
  cout << *lower_bound(a.begin(), a.end(), 12) << endl; // 13

  // >= 14
  cout << *lower_bound(a.begin(), a.end(), 14) << endl; // 14

  // > 10
  cout << *upper_bound(a.begin(), a.end(), 10) << endl; // 13
}
