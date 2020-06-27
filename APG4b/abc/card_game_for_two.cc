#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> cards(N);
  for (int i = 0; i < N; i++) {
    cin >> cards[i];
  }
  int alice, bob = 0;
  for (int i = 0; i < N; i++) {
    int max = *max_element(cards.begin(), cards.end());
    int max_index = max_element(cards.begin(), cards.end()) - cards.begin();
    cards.erase(cards.begin() + max_index);
    if (i % 2 == 0) alice += max;
    else bob += max;
  }
  cout << alice - bob << endl;
}
