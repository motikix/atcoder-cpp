#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  char s;
  for (int i = 0; i < n; i++) {
    cin >> s;
    if (s == 'Y') {
      cout << "Four" << endl;
      return 0;
    }
  }
  cout << "Three" << endl;
}
