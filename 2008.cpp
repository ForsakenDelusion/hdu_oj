#include "iostream"

using namespace std;

int main() {
    int round;
    double num;
    while (cin >> round) {
        if (round == 0)
            break;
        int neg = 0, pos = 0, zero = 0;
        for (int i = 0; i < round; i++) {
            cin >> num;
            if (num > 0) {
                pos++;

            } else if (num == 0) {
                zero++;
            } else {
                neg++;
            }
        }
        cout << neg << " " << zero << " " << pos << endl;
    }
    return 0;
}
