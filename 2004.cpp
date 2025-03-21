#include "bits/stdc++.h"

using namespace std;

int main() {
    int soccer;
    while (cin >> soccer) {
        if (90 <= soccer && soccer <= 100) {
            cout << 'A' << endl;
        } else if (80 <= soccer && soccer <= 89) {
            cout << 'B' << endl;
        } else if (70 <= soccer && soccer <= 79) {
            cout << 'C' << endl;
        } else if (60 <= soccer && soccer <= 69) {
            cout << 'D' << endl;
        } else if (0 <= soccer && soccer <= 59) {
            cout << 'E' << endl;
        } else {
            cout << "Score is error!" << endl;
        }
    }

    return 0;
}