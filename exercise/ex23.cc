#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);
  map<int, int> m;
  for (int i = 0; i < N; i++) {
    int a;
    scanf("%d", &a);
    if (m.count(a)) {
      m[a] += 1;
    } else {
      m[a] = 1;
    }
  }
  int max_key = -1;
  int max_value = -1;
  for (auto p : m) {
    if (p.second > max_value) {
      max_key = p.first;
      max_value = p.second;
    }
  }
  cout << max_key << " " << max_value << endl;
}
