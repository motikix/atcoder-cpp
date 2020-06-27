#include <iostream>
using namespace std;

int main() {
  string str1, str2;
  cin >> str1;
  str2 = ", world!";

  cout << str1 << str2 << endl;

  string hello = "Hello";
  cout << hello.size() << endl;
  cout << hello.at(0) << endl;
  cout << hello.at(4) << endl;

  char c = 'a';
  cout << c << endl;

  char c2 = hello.at(0);

  string str = "Hello";

  str.at(0) = 'M';
  cout << str << endl;

  if (str.at(1) == 'e') {
    cout << "AtCoder" << endl;
  }
}
