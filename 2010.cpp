#include <cmath>
#include "iostream"
using namespace std;

int main(){

    int n,m;
    while (cin >> n >> m) {
        bool flag = false;
        for(int i = n; i <= m ; i++) {
            int ge,shi,bai;
            ge = i % 10;
            shi = i / 10 % 10;
            bai = i / 10 / 10 ;

            if(i == pow(ge, 3) + pow(shi, 3) + pow(bai, 3)) {
                flag = true;
                cout << i << " ";
            }
        }
        if (!flag) {
            cout << "no" << endl;
        }
    }


    return 0;
}