#include <bits/stdc++.h>
using namespace std;

int main() {
  set<int> S;

  S.insert(3);
  S.insert(7);
  S.insert(8);
  S.insert(10);

  // This operation is ignored because 3 is already included
  S.insert(3);

  cout << "size: " << S.size() << endl;

  if (S.count(7)) {
    cout << "found 7" << endl;
  }

  if (S.count(5)) {
    cout << "found 5" << endl;
  }

  cout << "smallest value: " << *begin(S) << endl;
  cout << "biggest value: " << *rbegin(S) << endl;

  // Print in ascending order
  for (int value : S) {
    cout << value << endl;
  }
}
