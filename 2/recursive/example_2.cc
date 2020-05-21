#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int is_valid_move(vector<string> &board, vector<vector<bool>> &checked, int x, int y) {
  int N = board.size();

  if (x <= -1 || x >= N || y <= -1 || y >= N) {
    return false;
  }

  if (board.at(y).at(x) == '#') {
    return false;
  }

  if (checked.at(y).at(x)) {
    return false;
  }

  return true;
}

bool reachable(vector<string> &board, vector<vector<bool>> &checked, int x, int y) {
  int N = board.size();

  if (x == N - 1 && y == N - 1) {
    return true;
  }

  checked.at(y).at(x) = true;

  bool result = false;

  if (is_valid_move(board, checked, x, y - 1) && reachable(board, checked, x, y - 1)) {
    return true;
  }
  if (is_valid_move(board, checked, x + 1, y) && reachable(board, checked, x + 1, y)) {
    return true;
  }
  if (is_valid_move(board, checked, x, y + 1) && reachable(board, checked, x, y + 1)) {
    return true;
  }
  if (is_valid_move(board, checked, x - 1, y) && reachable(board, checked, x - 1, y)) {
    return true;
  }

  return result;
}

int main() {
  int N;
  cin >> N;

  vector<string> board(N);
  for (int i = 0; i < N; i++) {
    cin >> board.at(i);
  }

  vector<vector<bool>> checked(N, vector<bool>(N, false));
  
  if (reachable(board, checked, 0, 0)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
