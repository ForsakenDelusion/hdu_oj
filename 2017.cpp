#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while (cin >> n) {
        for (int i = 0; i < n; i++) {
            string a;
            int cnt =0;
            cin >> a;
            int idx = a.length();
            for (int j = 0; j < idx; j++) {
                if(a[j] >= '0' && a[j]<='9') cnt++;
            }
            
            cout << cnt << endl;
        }
    }

    return 0;
}