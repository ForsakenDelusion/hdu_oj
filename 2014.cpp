#include <algorithm>
#include <cstdio>
#include "iostream"
#include "deque"

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        deque<int> socre;
        double res = 0;
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            socre.push_back(temp);
        }
        sort(socre.begin(), socre.end());
        socre.pop_back();
        socre.pop_front();

        for (int temp : socre) {
            res += temp;
        }

        res = res / (n - 2);

        printf("%.2lf", res);
    }

    return 0;
}