#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  // lambda
  auto my_min = [](int a, int b) {
    if (a < b) {
     return a; 
    }
    else {
      return b;
    }
  };

  cout << my_min(5, 10) << endl;

  int max_num = 0;

  // lambda with outside variables
  auto get_max = [&](int n) {
    if (max_num < n) {
      max_num = n;
    }
    return max_num;
  };

  cout << get_max(5) << endl;
  cout << get_max(2) << endl;
  cout << get_max(10) << endl;
  cout << get_max(4) << endl;

  // lambda with recursive call
  function<int(int)> sum = [&](int n) {
    if (n == 0) {
     return 0; 
    }
    int s = sum(n - 1);
    return s + n;
  };

  cout << sum(3) << endl;

  vector<int> v = { 2, 3, 1 };
  auto comp = [](int a, int b) { return a > b; };
  sort(v.begin(), v.end(), comp);
  sort(v.begin(), v.end(), [](int a, int b) { return a > b; });

  cout << v[0] << endl;
}
