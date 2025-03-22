#include <cstdio>
#include "iostream"

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        for (int i = 0; i < n; i++) {
            int m = 0;
            cin >> m;
            double sum = 0.0;
            for (int j = 1; j <= m; j++) {
                if (j % 2 == 0) {
                    sum = sum - 1.0 / j;
                } else {
                    sum = sum + 1.0 / j;
                }
            }
            printf("%.2lf\n", sum);
        }
    }
    return 0;
}