#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  string str1, str2;
  cin >> str1 >> str2;
  int n = str1.length(), m = str2.length();
  if (n < m)
    cout << false;
  int j = 0;
  for (int i = 0; i < n && j < m; i++) {
    if (str1[i] == str2[j]) {
      j++;
    }
    cout << (j == m);
  }
  return 0;
}