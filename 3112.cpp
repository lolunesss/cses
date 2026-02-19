#include <bits/stdc++.h>

using namespace std;

int MAX = 1e9;

int main() {
  int l = 0;
  int h = MAX;
  string res;
  while (l < h) {
    int mid = (l + h) / 2;
    cout << "? " << mid << endl;
    cin >> res;
    if (res == "YES") {
      l = mid + 1;
    } else {
      h = mid;
    }
  }
  cout << "! " << l << endl;
}
