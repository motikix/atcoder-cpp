#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

int main() {
  string abcd;
  cin >> abcd;
  int a = (int)abcd.at(0) - '0';
  int b = (int)abcd.at(1) - '0';
  int c = (int)abcd.at(2) - '0';
  int d = (int)abcd.at(3) - '0';

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      for (int k = 0; k < 2; k++) {
        int sum = 0;
        string exp = "";
        if (i == 0) {
          sum = a + b;
          exp = to_string(a) + "+" + to_string(b);
        }
        else {
          sum = a - b;
          exp = to_string(a) + "-" + to_string(b);
        }
        if (j == 0) {
          sum += c;
          exp += "+" + to_string(c);
        }
        else {
          sum -= c;
          exp += "-" + to_string(c);
        }
        if (k == 0) {
          sum += d;
          exp += "+" + to_string(d);
        }
        else {
          sum -= d;
          exp += "-" + to_string(d);
        }
        if (sum == 7) {
          cout << exp << "=7" << endl;
          return 0;
        }
      }
    }
  }
}
