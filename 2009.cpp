#include <cmath>
#include <cstdio>
#include "iostream"

using namespace std;

int main() {

    int m;
    double n;
    while (cin >> n) {
        double sum = 0.0;
        cin >> m;
        for (int i = 0; i < m; i++) {
            if (i == 0) {
                sum += n;
            }else {
                n = sqrt(n);
                sum += n;
            }
        }
        printf("%.2lf",sum);
    }

}