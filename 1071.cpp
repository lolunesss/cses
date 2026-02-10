#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long x, y;
    cin >> x >> y;
    long long m = max(x, y);
    if (m & 1) {
      // starts from below
      if (m == x) {
        cout << (m - 1) * (m - 1) + y << endl;
      } else {
        cout << m * m - x + 1 << endl;
      }
    } else {
      // Starts from top
      if (m == y) {
        cout << (m - 1) * (m - 1) + x << endl;
      } else {
        cout << m * m - y + 1 << endl;
      }
    }
  }
  return 0;
}