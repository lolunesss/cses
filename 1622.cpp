#include <bits/stdc++.h>

using namespace std;

vector<string> permute(map<char, int> chmap) {
  int s = 0;
  for (auto p : chmap) {
    s += p.second;
  }
  if (s == 0) {
    vector<string> s;
    s.push_back("");
    return s;
  }
  vector<string> results;
  for (auto p : chmap) {
    if (p.second <= 0) continue;
    map<char, int> cp = chmap;
    cp[p.first]--;
    vector<string> s = permute(cp);
    for (auto a : s) {
      results.push_back(p.first + a);
    }
  }
  return results;
}

int main() {
  string s;
  cin >> s;
  sort(s.begin(), s.end());
  map<char, int> chmap;
  for (int i = 0; i < s.size(); i++) {
    chmap[s[i]]++;
  }
  vector<string> results = permute(chmap);
  cout << results.size() << endl;
  for (auto s : results) {
    cout << s << endl;
  }
  return 0;
}