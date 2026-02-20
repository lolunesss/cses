#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> coins(n);
  for (int i = 0; i < n; i++) {
    cin >> coins[i];
  }
  int* arr = new int[x + 1];

  arr[0] = 1;
  for (int i = 0; i <= x; i++) {
    arr[i] = i == 0 ? 0 : INT_MAX;
    for (auto c : coins) {
      if (i - c >= 0 && arr[i - c] != INT_MAX) {
        arr[i] = min(arr[i], arr[i - c] + 1);
      }
    }
  }
  cout << (arr[x] == INT_MAX ? -1 : arr[x]) << endl;
  return 0;
}