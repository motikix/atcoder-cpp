#include <bits/stdc++.h>
#include <functional>
#include <ostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  // Priority queue retrieved in descending order
  priority_queue<int> pq;
  pq.push(10);
  pq.push(3);
  pq.push(6);
  pq.push(1);

  while (!pq.empty()) {
    cout << pq.top() << endl;
    pq.pop();
  }

  // Priority queue retrieved in ascending order
  priority_queue<int, vector<int>, greater<int>> apq;
  apq.push(10);
  apq.push(3);
  apq.push(6);
  apq.push(1);

  while (!apq.empty()) {
    cout << apq.top() << endl;
    apq.pop();
  }
}
