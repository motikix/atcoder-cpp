#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main() {
  stack<int> S;
  S.push(10);
  S.push(1);
  S.push(3);

  cout << S.top() << endl;
  S.pop();
  cout << S.top() << endl;
}
