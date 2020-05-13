#include <iostream>
using namespace std;

int main() {
  int x = 5; // xのスコープはこの行からmain関数のブロックの終わりまで

  if (x == 5) {
    int y = 10; // yのスコープはこの行からif文のブロックの終わりまで
    cout << x + y << endl;

    // 同じブロックに変数yがあるので宣言できない
    // string y = "hello"
  }

  cout << x << endl;
  // cout << y << endl;

  if (x == 5) {
    string y = "hello"; // ブロックが違うので変数yを宣言できる
    cout << x << y << endl;
  }
}
