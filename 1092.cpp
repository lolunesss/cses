#include <bits/stdc++.h>

using namespace std;

void print(vector<long long> s) {
  cout << s.size() << endl;
  for (auto a : s) {
    cout << a << " ";
  }
  cout << endl;
}

vector<long long> addTo(long long int n, long long int k) {
  if (n <= k) {
    return {n};
  }
  vector<long long int> res = addTo(n - k, k - 1);
  res.push_back(k);
  return res;
}

int main() {
  long long int n;
  cin >> n;
  if (n % 4 != 0 && (n + 1) % 4 != 0) {
    cout << "NO" << endl;
    return 0;
  }
  long long s = n * (n + 1) / 4;
  vector<long long> one;
  vector<long long> two;

  for (long long int i = n; i >= 1; i--) {
    if (s >= i) {
      one.push_back(i);
      s -= i;
    } else {
      two.push_back(i);
    }
  }

  cout << "YES" << endl;
  print(one);
  print(two);
  return 0;
}