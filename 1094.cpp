#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int prev;
  cin >> prev;
  long long int s = 0;
  for (int i = 0; i < n - 1; i++) {
    int a;
    cin >> a;
    if (a < prev) {
      s += prev - a;
    } else {
      prev = a;
    }
  }
  cout << s << endl;
  return 0;
}