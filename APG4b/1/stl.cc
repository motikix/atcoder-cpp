#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  // 配列を引数にする関数
  vector<int> vec = {1, 5, 3};

  // 要素を逆順に（{3, 5, 1}）
  reverse(vec.begin(), vec.end());

  // sort in ascending order
  vector<int> numbers = {2, 5, 2, 1};
  sort(numbers.begin(), numbers.end()); // {1, 2, 2, 5}
  for (int i = 0; i < numbers.size(); i++) {
    cout << numbers.at(i) << endl;
  }

  // sort in descending order
  reverse(numbers.begin(), numbers.end()); // {5, 2, 2, 1}
  for (int i = 0; i < numbers.size(); i++) {
    cout << numbers.at(i) << endl;
  }
}
