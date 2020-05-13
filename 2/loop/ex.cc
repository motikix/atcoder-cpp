#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int a;
  cin >> a;
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }
 
  // ここにプログラムを追記
  int count = 0;
  for (int i = 0; i < data.size(); i++) {
    if (data.at(1) == a) count++;
  }
  cout << count << endl;
}
