#include <iostream>
using namespace std;

int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    int mon[12] = {31, 28, 31, 30, 31, 30,
                   31, 31, 30, 31, 30, 31};

    string week[7] = {"Mon", "Tue", "Wed", "Thu",
                      "Fri", "Sat", "Sun"};

    int day1 = d1;
    int day2 = d2;

    for(int i = 0; i < m1 - 1; i++) {
        day1 += mon[i];
    }

    for(int i = 0; i < m2 - 1; i++) {
        day2 += mon[i];
    }

    int diff = day2 - day1;

    int idx = (diff % 7 + 7) % 7;

    cout << week[idx];

    return 0;
}