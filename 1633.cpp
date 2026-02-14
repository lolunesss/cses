#include <bits/stdc++.h>

using namespace std;

int arr[1000001] = {0};
const int MOD = 1000000007;

int solve(int n) {
  if (n < 0) return 0;
  if (n <= 1) return 1;
  if (arr[n]) return arr[n];
  long long int a = (solve(n - 6) + solve(n - 5)) % MOD;
  long long int b = (solve(n - 4) + solve(n - 3)) % MOD;
  long long int c = (solve(n - 2) + solve(n - 1)) % MOD;
  arr[n] = (a + b + c) % MOD;
  return arr[n];
}

int main() {
  int n;
  cin >> n;
  cout << solve(n) << endl;
  return 0;
}