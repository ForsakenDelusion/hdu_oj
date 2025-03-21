#include <iostream>
#include <ostream>
#include "bits/stdc++.h"

using namespace std;

bool isLeapYear(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int main() {
    int year;
    int month;
    int day;
    int days_per_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    bool flag = false;
    while (scanf("%d/%d/%d", &year, &month, &day) != EOF) {
        int res = 0;

        // 如果月份不超过2，实际上没必要判断闰年
        if (month > 2) {
            flag = isLeapYear(year);
        }
        for (int i = 1; i < month; i++) {
            if (i == 2 && flag) {
                res += 29;
            } else {
                res += days_per_month[i];
            }
        }
        res += day;
        cout << res << endl;
    }
    return 0;
}