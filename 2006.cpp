#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {  // 读取 n
        int num;
        int res = 0;
        int flag = false;  // 标志是否为第一次遇见奇数
        for (int i = 0; i < n; i++) {
            cin >> num;  // 读取后续的 n 个整数

            if (num % 2 != 0) {  // num 为奇数
                if (flag == false) {
                    flag = true;
                    res += num;
                } else {
                    res *= num;
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}