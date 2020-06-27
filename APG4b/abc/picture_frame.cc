#include <iostream>
#include <vector>
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  vector<string> rows(H);
  for (int i = 0; i < H; i++) {
    cin >> rows.at(i);
  }
  for (int i = 0; i < W+2; i++) {
    cout << '#';
  }
  cout << endl;
  for (int i = 0; i < H; i++) {
    cout << '#' + rows.at(i) + '#' << endl;
  }
  for (int i = 0; i < W+2; i++) {
    cout << '#';
  }
  cout << endl;
}
