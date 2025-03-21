#include <utility>
#include "iostream"

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;

    while (cin >> a >> b) {
        if (a > b) {
            swap(a, b);
        }
        int ji = 0, ou = 0;

        for (int i = a; i <= b; i++) {
            if (i % 2 != 0) {
                ji += i * i * i;
            } else {
                ou += i * i;
            }
        }
        cout << ou << " " << ji << endl;
    }

    return 0;
}