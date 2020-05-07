#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> B(N);
  for (int i = 0; i < N; i++) {
    cin >> B.at(i);
  }
  int C = 1;
  int T = 0;
  while (true) {
    C = B.at(C-1);
    T++;
    if (C == 2) break;
    if (T > N) {
      T = -1;
      break;
    }
  }
  cout << T << endl;
}
