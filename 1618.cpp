#include <bits/stdc++.h>

using namespace std;

int main() {
  long long int n;
  cin >> n;
  long long int p = 5;
  int c = 0;
  while (p <= n) {
    c += n / p;
    p *= 5;
  }
  cout << c << endl;

  return 0;
}