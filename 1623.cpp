#include <bits/stdc++.h>

using namespace std;

long long int sum(vector<long long> ns, int k) {
  long long int s = 0;
  for (int i = 0; i < ns.size(); i++) {
    if (k & (1 << i)) {
      s += ns[i];
    }
  }
  return s;
}

int main() {
  int n;
  cin >> n;
  vector<long long> ns(n);
  long long int total_sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> ns[i];
    total_sum += ns[i];
  }

  long long mini = LLONG_MAX;
  for (int i = 0; i < pow(2, n); i++) {
    long long int a = sum(ns, i);
    long long int b = total_sum - a;
    mini = min(mini, a > b ? (a - b) : (b - a));
  }
  cout << mini << endl;

  return 0;
}