#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Findpattern(string s, string p) {
  int found = s.find(p);
  while (found != string::npos) {
    cout << "Found at index " << found << endl;
    found = s.find(p, found + 1);
  }
}

int main() {
  string str, pat;
  cin >> str >> pat;
  Findpattern(str, pat);
  return 0;
}