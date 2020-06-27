#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main() {
  double x = 1000000000;
  double y = 0.000000001;

  double z = x + y;

  cout << fixed << setprecision(16);
  cout << "x: " << x << endl;
  cout << "y: " << y << endl;
  cout << "z: " << z << endl;
}
