#include <bits/stdc++.h>
using namespace std;

int main() {
  cout << (int)'A' << endl;
  cout << (int)'B' << endl;
  cout << (int)'Z' << endl;

  cout << (char)65 << endl;
  cout << (char)66 << endl;
  cout << (char)90 << endl;

  for (int i = 0; i <= ('Z' - 'A'); i++) {
    cout << (char)('A' + i);
  }

  cout << endl;
  
  cout << (char)('x' + ('A' - 'a')) << endl;
  cout << (char)('X' - ('A' - 'a')) << endl;

  cout << "A: " << (int)'A' << ", a: " << (int)'a' << ", x: " << (int)'x' << ", X: " << (int)'X' << endl;

  char c = 'x';
  if ('A' <= c && c <= 'Z') {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
