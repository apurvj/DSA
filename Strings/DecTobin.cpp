#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s = "";
  int n;
  cin >> n;
  while (n > 0) {
    s += to_string(n % 2);
    n /= 2;
  }
  reverse(s.begin(), s.end());
  cout << s;
  return 0;
}