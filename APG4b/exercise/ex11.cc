#include <iostream>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;

  for (int i = 0; i < N; i++) {
    string opN;
    int BN;
    cin >> opN >> BN;

    if (opN == "+") {
      A += BN;
    } else if (opN == "-") {
      A -= BN;
    } else if (opN == "*") {
      A *= BN;
    } else if (opN == "/" && BN != 0) {
      A /= BN;
    } else {
      cout << "error" << endl;
      break;
    }

    cout << i + 1 << ":" << A << endl;
  }
}
