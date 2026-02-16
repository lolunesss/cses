#include <bits/stdc++.h>

using namespace std;

int nthdigit(long long int c, long long int n) {
  stack<int> s;
  while (c) {
    s.push(c % 10);
    c /= 10;
  }
  for (int i = 0; i < n - 1; i++) {
    s.pop();
  }
  return s.top();
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long int n;
    cin >> n;
    long long int p = 9;
    long long int d = 1;
    long long s = 1;
    while (n - d * p > 0) {
      n -= d * p;
      d++;
      p *= 10;
      s *= 10;
    }
    long long int digit = (n - 1) % d;
    long long int num = s + ((n - 1) / d);
    // cout << num << " " << digit << " " << endl;
    cout << nthdigit(num, digit + 1) << endl;
  }
  return 0;
}