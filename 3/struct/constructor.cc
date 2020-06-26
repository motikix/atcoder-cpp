#include <bits/stdc++.h>
#include <string>
using namespace std;

struct MyPair {
  int x;
  string y;

  MyPair() {
    cout << "constructor called" << endl;
  }
};

struct NumString {
  int length;
  string s;

  NumString(int num) {
    cout << "constructor called" << endl;

    s = to_string(num);
    length = s.size();
  }
};

int main() {
  MyPair p;
  p.x = 12345;
  p.y = "hello";
  cout << "p.x = " << p.x << endl;
  cout << "p.y = " << p.y << endl;

  NumString num(12345);
  cout << "num.s = " << num.s << endl;
  cout << "num.length = " << num.length << endl;

  NumString numm = { 12345 };
  cout << "num.s = " << num.s << endl;
  cout << "num.length = " << num.length << endl;
}
