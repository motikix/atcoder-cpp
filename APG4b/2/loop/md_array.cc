#include <bits/stdc++.h>
#include <vector>
using namespace std;

void example();
void jaggedArray();
void index();

int main() {
  example();
  jaggedArray();
}

void example() {
  // 2d (3*4) array by int
  vector<vector<int>> data(3, vector<int>(4));

  cout << "Enter a value of 3 * 4" << endl;

  // use nested loop
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> data.at(i).at(j);
    }
  }

  // count the number of 0
  int count = 0;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {

      // determine if the i-th pixel from the top and
      // the j-th pixel from the late are 0
      if (data.at(i).at(j) == 0) {
        count++;
      }

    }
  }

  cout << count << endl;

}

void jaggedArray() {
  // 2d (3*0) array
  vector<vector<int>> data(3);

  data.at(0).push_back(1);
  data.at(0).push_back(2);
  data.at(0).push_back(3);

  data.at(1).push_back(4);
  data.at(1).push_back(5);
  data.at(1).push_back(6);
  data.at(1).push_back(7);

  data.at(2).push_back(8);
  data.at(2).push_back(9);
}

void index() {
  vector<vector<vector<int>>> data = {
    {
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 10, 11, 12},
    },
    {
      {13, 14, 15, 16},
      {17, 18, 19, 20},
      {21, 22, 23, 24},
    },
  };

  int size1 = data.size();
  cout << size1 << endl; // 2

  int size2 = data.at(0).size();
  cout << size2 << endl; // 3

  int size3 = data.at(0).at(0).size();
  cout << size3 << endl; // 4

  cout << size1 * size2 * size3 << endl; // 24
}
