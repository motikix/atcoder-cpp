#include <bits/stdc++.h>
#include <vector>
using namespace std;

void fill(vector<vector<char>> &board, vector<vector<bool>> &checked, int y, int x) {
  if (x < 0 || x >= 10 || y < 0 || y >= 10) return;
  if (board.at(y).at(x) == 'x') return;
  if (checked.at(y).at(x)) return;

  checked.at(y).at(x) = true;

  fill(board, checked, y + 1, x);
  fill(board, checked, y - 1, x);
  fill(board, checked, y, x + 1);
  fill(board, checked, y, x - 1);
}

bool check(vector<vector<char>> &board) {
  vector<vector<bool>> checked(10, vector<bool>(10, false));

  int x, y;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (board.at(i).at(j) == 'o') {
        y = i;
        x = j;
        break;
      }
    }
  }
  
  fill(board, checked, y, x);

  bool ok = true;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (board.at(i).at(j) == 'o') {
        if (!checked.at(i).at(j)) ok = false;
      }
    }
  }
  return ok;
}

int main() {
  vector<vector<char>> board(10, vector<char>(10));

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      cin >> board.at(i).at(j);
    }
  }


  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (board.at(i).at(j) == 'o') continue;

      board.at(i).at(j) = 'o';

      if (check(board)) {
        cout << "YES" << endl;
        return 0;
      }

      board.at(i).at(j) = 'x';
    }
  }
  cout << "NO" << endl;

}
