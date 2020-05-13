#include <iostream>
#include <string>
using namespace std;

int main() {
  string str = "Hello";
  cout << str.size() << endl; // 5
  // cout << "Hello"s.size() << endl; // 5（末尾にsが必要）
  // cout << "Hello".size() << endl; // NG

  string s1 = "ABC";
  string s2 = "ABC";
  string s3 = "XY";

  if (s1 == s2) {
    cout << "ABC == ABC" << endl;
  }
  if (s1 < s3) {
    cout << "ABC < XY" << endl;
  }

  cout << str + ", world!" << endl;

  str += ", AtCoder!";
  cout << str << endl;

  string sa = "a";
  char ca = 'a';
  // bool b = str == c; // NG

  str = "Hello";

  char c = str.at(0);
  cout << str + c << endl;

  char a, b;
  cin >> a >> b;

  cout << a << endl;
  cout << b << endl;

  cout << "こんにちは\nAtCoder\n";

  // 空白で区切らず行単位で入力を受け取りたいときは
  // cin の代わりに getline を使用する
  string s, t;
  getline(cin, s);
  getline(cin, t);

  cout << "一行目 " << s << endl;
  cout << "二行目 " << t << endl;
}
