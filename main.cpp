#include <iostream>
#include <vector>
using namespace std;

vector<int> sorting(vector<int> vec) {
  for (int i = (int) vec.size() - 1; i >= 0; i--) {
    int maxInd = 0;
    for (int j = 0; j <= i; ++j) {
      if (vec[maxInd] < vec[j]) {
        maxInd = j;
      }
    }
    swap(vec[i], vec[maxInd]);
  }
  return vec;
}

int main() {
  vector<int> vec;
  int n = 0;
  while (n != -2) {
    cin >> n;
    if (n == -1) {
      if (vec.size() < 5) {
        cout << "not enough elements!" << endl;
        continue;
      } else {
        vec = sorting(vec);
        cout << vec[5 - 1] << endl;
      }
    } else
      vec.push_back(n);
  }
  return 0;
}
