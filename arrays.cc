#include <iostream>
#include <vector>
using namespace std;

int main(void) {
  // 文字列
  string str;
  str = "abcd";
  cout << str.at(0) << endl;
  cout << str.size() << endl;

  // 配列
  vector<int> vec;
  vec = { 25, 100, 64 };
  cout << vec.at(0) << endl;
  cout << vec.size() << endl;

  // ３つの整数を入力から受け取る
  cout << "input from stdin. length==3" << endl;
  // == vector<int> input = {0, 0, 0}
  vector<int> input(3); 
  cin >> input.at(0) >> input.at(1) >> input.at(2);
  cout << input.at(0) + input.at(1) + input.at(2) << endl;

  //ループで受け取るのが一般的
  cout << "input from stdin. length==3" << endl;
  vector<int> input_2(3);
  for (int i = 0; i < 3; i++) {
    cin >> input_2.at(i);
  }

  // 初期値を指定して初期化
  // == {5, 5, 5}
  vector<int> ini(3, 5); 

  // 末尾に追加
  ini.push_back(5);

  // 末尾を削除
  ini.pop_back();

  // 5, 5, 5
  for (int i = 0; i < ini.size(); i++) {
    cout << ini.at(i) << endl;
  }

  // 配列同士の比較
  vector<int> v1 = { 1, 2, 3 };
  vector<int> v2 = { 1, 2, 3 };
  if (v1 == v2) {
    cout << "OK" << endl;
  }

  // 配列の上書き
  vector<int> v3(3, 10);
  v3 = vector<int>(100, 2);
  // 2
  cout << v3.at(99) << endl;
}
