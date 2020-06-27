#include <bits/stdc++.h>
#include <cstdint>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  vector<int64_t> L(N + 1);
  L.at(0) = 2;
  L.at(1) = 1;

  for (int i = 2; i < L.size(); i++) {
    L.at(i) = L.at(i - 1) + L.at(i - 2);
  }

  cout << L.at(N) << endl;
}
