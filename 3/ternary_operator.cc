#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int answer;

  if (a < b) {
    answer = a;
  }
  else {
    answer = b;
  }

  cout << answer << endl;

  answer = a < b ? a : b;

  cout << answer << endl;

  int c;
  cin >> c;

  answer = a < b && a < c
    ? a
    : b < a && b < c
      ? b
      : c;

  cout << answer << endl;

  cout << (a < b ? a : b) << endl;
}
