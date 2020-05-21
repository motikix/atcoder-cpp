#include <bits/stdc++.h>
#include <ostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;

  // N * 3 * 3
  vector<vector<vector<char>>> data(N, vector<vector<char>>(3, vector<char>(3)));

  // input
  for (int i = 0; i < N; i++) {
    // read the i th state
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
        cin >> data.at(i).at(j).at(k);
      }
    }
  }

  // count the number of 'o's
  int count = 0;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {

        // Determine if the "i-th state",
        // "j-th from top", or "k-th from left" is'o '
        if (data.at(i).at(j).at(k) == 'o') {
          count++;
        }
      }
    }
  }

  cout << count << endl;
}
