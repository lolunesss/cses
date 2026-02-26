#include <bits/stdc++.h>

using namespace std;

long long two_knights(int n) {
  if (n == 1) return 0;
  long long total = 1LL * n * n * (n * n - 1) / 2;
  long long attacking = 4LL * (n - 1) * (n - 2);
  return total - attacking;
}

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cout << two_knights(i) << endl;
  }
  return 0;
}