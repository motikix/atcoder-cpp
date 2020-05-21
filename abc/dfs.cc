#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool is_valid_move(vector<vector<char>> &town, vector<vector<bool>> &checked, int x, int y) {
  if (x < 0 || y < 0 || x >= town.at(0).size() || y >= town.size()) return false;
  if (checked.at(y).at(x)) return false;
  if (town.at(y).at(x) == '#') return false;
  return true;
}

bool reacheable(vector<vector<char>> &town, vector<vector<bool>> &checked, int x, int y) {
  if (town.at(y).at(x) == 'g') return true;
  checked.at(y).at(x) = true;
  if (is_valid_move(town, checked, x+1, y) && reacheable(town, checked, x+1, y)) {
    return true;
  }
  if (is_valid_move(town, checked, x-1, y) && reacheable(town, checked, x-1, y)) {
    return true;
  }
  if (is_valid_move(town, checked, x, y+1) && reacheable(town, checked, x, y+1)) {
    return true;
  }
  if (is_valid_move(town, checked, x, y-1) && reacheable(town, checked, x, y-1)) {
    return true;
  }
  return false;
}

int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<char>> town(H, vector<char>(W));
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> town.at(i).at(j);
    }
  }

  // start point
  int x, y;
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (town.at(i).at(j) == 's') {
        x = j;
        y = i;
      }
    }
  }

  vector<vector<bool>> checked(H, vector<bool>(W, false));
  bool reached = reacheable(town, checked, x, y);

  if (reached) cout << "Yes" << endl;
  else cout << "No" << endl;
}
