#include <bits/stdc++.h>

using namespace std;

int main() {
  char ch;
  char prev = '0';
  int c = 1;
  int maxi = -1;
  while ((ch = getchar()) != '\n') {
    if (ch == prev) {
      c++;
    } else {
      c = 1;
    }
    prev = ch;
    maxi = max(maxi, c);
  }
  cout << maxi << endl;
  return 0;
}