#include <vector>
#include <algorithm>
using namespace std;

int main() {
  // 配列を引数にする関数
  vector<int> vec = {1, 5, 3};

  // 要素を逆順に（{3, 5, 1}）
  reverse(vec.begin(), vec.end());
}
