#include <iostream>
using namespace std;

int main() {
  string n;
  cin >> n;

  int sum = 0;
  for (int i = 0; i < n.length(); i++) {
    sum += n.at(i) - '0';
  }

  if (stoi(n) % sum == 0) cout << "Yes" << endl;
  else cout << "No" << endl;
}
