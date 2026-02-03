#include <bits/stdc++.h>

using namespace std;

void move(int n, int from, int to, int mid) {
  if (n == 0) return;
  move(n - 1, from, mid, to);
  cout << from << " " << to << endl;
  move(n - 1, mid, to, from);
}

int main() {
  int n;
  cin >> n;
  cout << int(pow(2, n) - 1) << endl;
  move(n, 1, 3, 2);
  return 0;
}