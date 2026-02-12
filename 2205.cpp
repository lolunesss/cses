#include <bits/stdc++.h>

using namespace std;

vector<string> gen_gray_code(int n) {
  if (n == 0) {
    return {""};
  }
  vector<string> sub = gen_gray_code(n - 1);
  vector<string> res;
  for (int i = 0; i < sub.size(); i++) {
    res.push_back("0" + sub[i]);
  }
  for (int i = sub.size() - 1; i >= 0; i--) {
    res.push_back("1" + sub[i]);
  }
  return res;
}

int main() {
  int n;
  cin >> n;
  vector<string> gc = gen_gray_code(n);
  for (auto s : gc) {
    cout << s << endl;
  }
  return 0;
}