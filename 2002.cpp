#include <cstdio>

#include "bits/stdc++.h"
#define PI 3.1415927
using namespace std;

int main() {
  double r;
  while (cin >> r) {
    printf("%.3lf", 4.0 / 3 * r * r * r * PI);
  }

  return 0;
}