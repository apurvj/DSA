#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  getline(cin, str);
  int base = 1, ans = 0, size = str.length() - 1;
  for (int i = size; i >= 0; i--) {
    ans += ((str[i] - '0') * base);
    base *= 2;
  }
  cout << ans;
  return 0;
}