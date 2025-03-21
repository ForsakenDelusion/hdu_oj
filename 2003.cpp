#include <cstdio>

#include "bits/stdc++.h"

using namespace std;

int main() {
  double cur;
  while (cin >> cur) {
    if (cur < 0) {
      printf("%.2lf", -cur);
    } else {
      printf("%.2lf", cur);
    }
  }

  return 0;
}