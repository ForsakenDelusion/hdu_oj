#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    while (cin >> n) {
        int arra[n];
        int p = 0;
        int min = numeric_limits<int>::max();
        for (int i = 0; i < n; i++) {
            cin >> arra[i];
            if (arra[i] < min) {
                min = arra[i];
                p = i;
            }
        }
        swap(arra[p], arra[0]);

        for (int eleme : arra) {
            cout << eleme << " ";
        }
        cout << endl;
    }

    return 0;
}