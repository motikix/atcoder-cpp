#include <bits/stdc++.h>
using namespace std;

int main() {
  map<string, int> score;
  score["Alice"] = 100;
  score["Bob"] = 89;
  score["Charlie"] = 95;

  cout << score.at("Alice") << endl;
  cout << score.at("Bob") << endl;
  cout << score["Charlie"] << endl;

  // error
  // cout << score.at("Taro") << endl;

  if (score.count("Alice")) {
    cout << "Alice: " << score.at("Alice") << endl;
  }
  if (score.count("Jiro")) {
    // does not print
    cout << "Jiro: " << score.at("Jiro") << endl;
  }

  score.erase("Bob");

  cout << score.size() << endl;

  // In the loop, Key values are retrieved in ascending order.
  for (pair<string, int> p : score) {
    // or `for (auto p : score) {}`
    string key = p.first;
    int value = p.second;
    cout << "key: " << key << ", value: " << value << endl;
  }
}
