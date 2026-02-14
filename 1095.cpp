#include <bits/stdc++.h>

using namespace std;

long long pow(long long a, long long b, long long m) {
  if (b == 0) return 1;
  long long h = pow(a, b / 2, m);
  long long res = (h * h) % m;
  if (b & 1) res = (res * a) % m;
  return res;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long a, b;
    cin >> a >> b;
    long long m = 1e9 + 7;
    cout << pow(a, b, m) << endl;
  }
  return 0;
}