#include <bits/stdc++.h>
using namespace std;

int main() {
  int N; cin >> N;
  vector<pair<pair<string, int>, int>> restaurant;
  for (int i = 0; i < N; i++) {
    string name;
    int score;
    cin >> name >> score;
    restaurant.push_back(make_pair(make_pair(name, score * -1), i + 1));
  }
  sort(restaurant.begin(), restaurant.end());
  for (auto r : restaurant) {
    cout << r.second << endl;
  }
}
