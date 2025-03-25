#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while (cin >> n) {
        if (n == 0)
            break;
        int sum = 1;
        int cnt = 1;
        map<int, int> map1;
        map1.emplace(1, 4);

        for (int i = 1; i < n; i++) {
            for (auto& element : map1) {
                if (element.second >= 4) {
                    sum++;
                    cnt++;
                    map1.emplace(cnt, 1);
                }
                element.second++;
            }
        }
        cout << sum << endl;
    }
    return 0;
}