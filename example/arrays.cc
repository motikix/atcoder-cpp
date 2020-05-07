#include <iostream>
#include <vector>
using namespace std;

int main(void) {
  int N;
  cin >> N;
  vector<int> mathmatics(N);
  vector<int> english(N);

  for (int i = 0; i < N; i++) {
    cin >> mathmatics.at(i);
  }

  for (int i = 0; i < N; i++) {
    cin >> english.at(i);
  }

  for (int i = 0; i < N; i++) {
    cout << mathmatics.at(i) + english.at(i) << endl;
  }
}
