#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  int arr[26] = {0};
  for (char ch : s) {
    arr[ch - 'A']++;
  }
  int no = 0, ne = 0;
  for (int i = 0; i < 26; i++) {
    if (arr[i] % 2 == 0)
      ne++;
    else
      no++;
  }
  if (no > 1) {
    cout << "NO SOLUTION" << endl;
    return 0;
  }
  stack<char> chst;
  for (int i = 0; i < 26; i++) {
    int n = arr[i];
    if (n % 2 == 0 && n > 0) {
      while (n > 0) {
        chst.push(i + 'A');
        cout << char(i + 'A');
        n -= 2;
      }
    }
  }
  for (int i = 0; i < 26; i++) {
    int n = arr[i];
    if (n % 2 == 1) {
      while (n > 1) {
        chst.push(i + 'A');
        cout << char(i + 'A');
        n -= 2;
      }
      chst.push(i + 'A');
    }
  }
  while (!chst.empty()) {
    cout << chst.top();
    chst.pop();
  }
  cout << endl;
  return 0;
}