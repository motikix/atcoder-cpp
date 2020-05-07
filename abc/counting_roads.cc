#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, M, from, to;
  cin >> N >> M;
  vector<int> cities(N, 0);
  for (int i = 0; i < M; i++) {
    cin >> from >> to;
    cities.at(from-1) += 1;
    cities.at(to-1) += 1;
  }
  for (int i = 0; i < N; i++) {
    cout << cities.at(i) << endl;
  }
}
