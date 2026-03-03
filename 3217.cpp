#include <bits/stdc++.h>

using namespace std;

void print_for_n(int n) {
  int** arr = new int*[n];
  for (int i = 0; i < n; i++) {
    arr[i] = new int[n];
    for (int j = 0; j < n; j++) {
      arr[i][j] = INT_MAX;
    }
  }
  arr[0][0] = 0;
  queue<pair<int, int> > q;
  q.push({0, 0});

  while (!q.empty()) {
    pair<int, int> top = q.front();
    q.pop();
    int x = top.first, y = top.second;
    if (x + 1 < n && y + 2 < n && arr[x + 1][y + 2] == INT_MAX) {
      arr[x + 1][y + 2] = arr[x][y] + 1;
      q.push({x + 1, y + 2});
    }
    if (x + 1 < n && y - 2 >= 0 && arr[x + 1][y - 2] == INT_MAX) {
      arr[x + 1][y - 2] = arr[x][y] + 1;
      q.push({x + 1, y - 2});
    }
    if (x - 1 >= 0 && y + 2 < n && arr[x - 1][y + 2] == INT_MAX) {
      arr[x - 1][y + 2] = arr[x][y] + 1;
      q.push({x - 1, y + 2});
    }
    if (x - 1 >= 0 && y - 2 >= 0 && arr[x - 1][y - 2] == INT_MAX) {
      arr[x - 1][y - 2] = arr[x][y] + 1;
      q.push({x - 1, y - 2});
    }
    if (x + 2 < n && y + 1 < n && arr[x + 2][y + 1] == INT_MAX) {
      arr[x + 2][y + 1] = arr[x][y] + 1;
      q.push({x + 2, y + 1});
    }
    if (x + 2 < n && y - 1 >= 0 && arr[x + 2][y - 1] == INT_MAX) {
      arr[x + 2][y - 1] = arr[x][y] + 1;
      q.push({x + 2, y - 1});
    }
    if (x - 2 >= 0 && y + 1 < n && arr[x - 2][y + 1] == INT_MAX) {
      arr[x - 2][y + 1] = arr[x][y] + 1;
      q.push({x - 2, y + 1});
    }
    if (x - 2 >= 0 && y - 1 >= 0 && arr[x - 2][y - 1] == INT_MAX) {
      arr[x - 2][y - 1] = arr[x][y] + 1;
      q.push({x - 2, y - 1});
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (j != 0) cout << " ";
      cout << arr[i][j];
    }
    cout << endl;
  }

  for (int i = 0; i < n; i++) {
    delete[] arr[i];
  }
  delete[] arr;
}

int main() {
  int n;
  cin >> n;
  print_for_n(n);
  return 0;
}