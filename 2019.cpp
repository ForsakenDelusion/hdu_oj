#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m;
    while (cin >> n >> m) {
        if (n == 0 && m == 0)
            break;
        vector<int> arra;
        bool flag = false;
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            if (temp < m && flag == false) {
                arra.push_back(temp);
            } 
            else {
                arra.push_back(m);
                flag = true;
                arra.push_back(temp);
            }
        }
        for (auto& it : arra) {
            cout << it << " ";
        }
    }

    return 0;
}