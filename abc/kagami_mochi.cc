#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> mochi(N);
  for (int i = 0; i < N; i++) {
    cin >> mochi.at(i);
  }
  sort(mochi.begin(), mochi.end());
  reverse(mochi.begin(), mochi.end());
  int ans = 0;
  int prev = 101;
  for (int i = 0; i < N; i++) {
    int cur = mochi.at(i);
    if (cur < prev) ans++;
    prev = cur;
  }
  cout << ans << endl;
}
