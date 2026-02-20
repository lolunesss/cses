#include <bits/stdc++.h>

using namespace std;

const int MOD = (int)1e9 + 7;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, x;
  cin >> n >> x;
  vector<int> coins(n);
  for (int i = 0; i < n; i++) {
    cin >> coins[i];
  }
  int arr[1000001];

  // memset(arr, 0, (x + 1) * sizeof(int));
  arr[0] = 1;
  for (int i = 1; i <= x; i++) {
    arr[i] = 0;
    for (auto& c : coins) {
      if (i - c >= 0) {
        arr[i] = (arr[i] + arr[i - c]) % MOD;
      }
    }
  }
  cout << arr[x] << endl;
  return 0;
}