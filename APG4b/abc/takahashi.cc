#include <iostream>
using namespace std;

int main() {
  string A, B;
  cin >> A >> B;
  if (A.length() > B.length()) cout << A << endl;
  else cout << B << endl;
}
