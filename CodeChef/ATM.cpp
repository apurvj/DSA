#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Calculate(int w, float itl) {
  if (w % 5 != 0) {
    printf("%.2f", itl);
    return;
  } else {
    float x = itl - w - 0.50;
    printf("%.2f", x);
  }
}

int main() {
  float initial;
  int withdraw;
  cin >> withdraw >> initial;
  if (withdraw >= initial) {
    printf("%.2f", initial);
    return 0;
  }
  Calculate(withdraw, initial);
  return 0;
}