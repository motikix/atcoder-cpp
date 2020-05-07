#include <iostream>
#include <vector>
using namespace std;

int main(void) {
  int N, ave, sum = 0;
  cin >> N;
  vector<int> students(N);
  for (int i = 0; i < N; i++) {
    cin >> students.at(i);
    sum += students.at(i);
  }
  ave = sum / N;
  int sub;
  for (int i = 0; i < N; i++) {
    sub = ave - students.at(i);
    if (sub < 0) {
      sub *= -1;
    }
    cout << sub << endl;
  }
}
