#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    while (cin >> n >> m) {
        int count = 0, sum = 0;
        for (int i = 1; i <= n; i++) {
            int num = 2 * i;  // 生成数列元素
            sum += num;
            count++;

            if (count == m || i == n) {  // 满 m 个数 或 最后不足 m 个
                cout << sum / count << " ";
                sum = 0;  // 重置
                count = 0;
            }
        }
    }

    return 0;
}