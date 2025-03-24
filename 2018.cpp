#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while (cin >> n) {
        if (n == 0) break;
        int enable = 1;  // 用来表示能生的牛的个数，初始值为1，每四年加一次
        int sum = 1;
        int cnt = 1;

        for (int i = 1; i < n; i++) {
            sum = sum + enable;
            cnt++;
            if (cnt % 4 == 0)
                enable++;
        }
        cout << sum << endl;
    }

    return 0;
}