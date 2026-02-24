#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int dc = 0;
    for (int i = 1; i * i <= n; i++) {
      if (n % i == 0) {
        dc++;
        if (i != n / i) dc++;
      }
    }
    cout << dc << endl;
  }
  return 0;
}