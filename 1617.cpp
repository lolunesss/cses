#include <bits/stdc++.h>

using namespace std;

long long int pow_mod_k(long long n, long long k, long long m) {
  if (k == 0) return 1LL;
  long long res = pow_mod_k(n, k / 2, m);
  long long d = (res * res) % m;
  if (k & 1) d = (d * n) % m;
  return d;
}

int main() {
  long long int n;
  cin >> n;
  cout << pow_mod_k(2LL, n, 1e9 + 7) << endl;
  return 0;
}