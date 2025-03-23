#include <cmath>
#include "iostream"

using namespace std;

bool is_Prime(int a) {
    for (int i = 2; i <= sqrt(a)+1; i++) {
        if (a % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, m;
    while (cin >> n >> m) {
        if (n == 0 && m == 0)
            break;
        int express = 0;
        bool flag = true;
        for (int i = n; i <= m; i++) {
            express = i * i + i + 41;
            flag = is_Prime(express);
            if (!flag) {
                cout << "Sorry" << endl;
                break;
            }
        }
        if (flag) {
            cout << "OK" << endl;
        }
    }

    return 0;
}