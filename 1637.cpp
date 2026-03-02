#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector<int>& ns) {
  if (n == 0) return 0;
  if (n < 0) return INT_MAX;
  if (ns[n]) return ns[n];

  int mini = INT_MAX;
  int nc = n;
  while (nc) {
    int d = nc % 10;
    if (d != 0) {
      mini = min(mini, solve(n - d, ns) + 1);
    }
    nc /= 10;
  }
  ns[n] = mini;
  return ns[n];
}

int main() {
  int n;
  cin >> n;
  vector<int> ns(n + 1, 0);
  cout << solve(n, ns) << endl;
  return 0;
}