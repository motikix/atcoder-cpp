#include <bits/stdc++.h>
#include <queue>
using namespace std;

int main() {
  queue<int> q;
  q.push(10);
  q.push(3);
  q.push(6);
  q.push(1);

  cout << q.size() << endl;

  while (!q.empty()) {
    cout << q.front() << endl;
    q.pop();
    cout << "queue size after pop: " << q.size() << endl;
  }
}
