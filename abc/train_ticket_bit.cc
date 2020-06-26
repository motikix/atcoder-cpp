#include <bits/stdc++.h>
#include <bitset>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
  char s[4];
  scanf("%s", &s);
  int a=s[0]-'0',b=s[1]-'0',c=s[2]-'0',d=s[3]-'0';
  for (int tmp=0; tmp<(1<<3); tmp++) {
    bitset<3> s(tmp);
    vector<char> op(3);
    int sum = a;
    if (s.test(0)) {
      sum += b;
      op.at(0) = '+';
    }
    else {
      sum -= b;
      op.at(0) = '-';
    }
    if (s.test(1)) {
      sum += c;
      op.at(1) = '+';
    }
    else {
      sum -= c;
      op.at(1) = '-';
    }
    if (s.test(2)) {
      sum += d;
      op.at(2) = '+';
    }
    else {
      sum -= d;
      op.at(2) = '-';
    }
    if (sum == 7) {
      cout << a << op[0] << b << op[1] << c << op[2] << d << "=7" << endl;
      return 0;
    }
  }
}
